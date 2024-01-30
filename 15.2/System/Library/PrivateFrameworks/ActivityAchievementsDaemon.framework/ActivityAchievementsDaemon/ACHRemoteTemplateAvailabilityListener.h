@class ACHTemplateStore, HDProfile, NSString, NSObject;
@protocol ACHRemoteTemplateAvailabilityListenerDelegate;

@interface ACHRemoteTemplateAvailabilityListener : NSObject <HDHealthDaemonReadyObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (weak, nonatomic) NSObject<ACHRemoteTemplateAvailabilityListenerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 templateStore:(id)a1;
- (void)_unprotectedNanoUserDefaultsDidSyncWithNotification:(id)a0;
- (void)_updateRemoteTemplateAvailabilityOnPairedDevice;
- (BOOL)_isKeyACHAvailabilityStateKey:(id)a0;

@end
