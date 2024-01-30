@class NSArray, NSObject;
@protocol RMConfigurationSubscriberEventStreamDelegate;

@interface RMConfigurationSubscriberEventStream : RMConfigurationSubscriberClient {
    NSObject *_delegationLock;
}

@property (retain, nonatomic) id eventStreamObserver;
@property (readonly, nonatomic) NSArray *configurationTypes;
@property (weak, nonatomic) id<RMConfigurationSubscriberEventStreamDelegate> delegate;

+ (void)_setupEventHandler;
+ (id)_eventDescriptorByNameForEventStreamNamed:(id)a0;
+ (id)configuredConfigurationTypes;

- (void)start;
- (void)_handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setupEventHandler;
- (void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)a0;
- (void)_delegateDidFailToFetchConfigurationsWithTypes:(id)a0 error:(id)a1;
- (void)_delegateDidFetchConfigurationsByType:(id)a0;

@end
