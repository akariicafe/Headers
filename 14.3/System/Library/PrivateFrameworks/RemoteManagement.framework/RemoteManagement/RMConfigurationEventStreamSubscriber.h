@class NSArray, NSObject;
@protocol RMConfigurationEventStreamSubscriberDelegate;

@interface RMConfigurationEventStreamSubscriber : RMConfigurationSubscriberClient {
    NSObject *_delegationLock;
}

@property (retain, nonatomic) id eventStreamObserver;
@property (readonly, nonatomic) NSArray *configurationTypes;
@property (weak, nonatomic) id<RMConfigurationEventStreamSubscriberDelegate> delegate;

+ (void)_setupEventHandler;
+ (id)_eventDescriptorByNameForEventStreamNamed:(id)a0;
+ (id)configuredConfigurationTypes;

- (void)_handleEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupEventHandler;
- (void)start;
- (void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)a0;
- (void)_delegateDidFailToFetchConfigurationsWithTypes:(id)a0 error:(id)a1;
- (void)_delegateDidFetchConfigurationsByType:(id)a0;

@end
