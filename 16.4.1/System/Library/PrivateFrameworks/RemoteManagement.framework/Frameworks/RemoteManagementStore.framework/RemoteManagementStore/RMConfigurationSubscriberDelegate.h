@class NSDictionary, NSConditionLock, NSObject;
@protocol OS_dispatch_queue;

@interface RMConfigurationSubscriberDelegate : NSObject {
    NSConditionLock *_applyLock;
}

@property (readonly, copy, nonatomic) NSDictionary *applicatorClassNameByConfigurationType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *applicatorQueue;

+ (id)sharedDelegateWithApplicators:(id)a0;

- (void).cxx_destruct;
- (void)didFailToFetchConfigurationsWithTypes:(id)a0 scope:(long long)a1 error:(id)a2;
- (void)didFetchConfigurationsByType:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2;
- (id)initWithApplicators:(id)a0;

@end
