@class MCProfileConnection, NSString;

@interface VSRestrictionsCenter : NSObject <MCProfileConnectionObserver>

@property (nonatomic, getter=isAcountModificationAllowed) BOOL accountModificationAllowed;
@property (retain, nonatomic) MCProfileConnection *profileConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRestrictionsCenter;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updateAccountModificationAllowed;
- (BOOL)_canInstallAppsAtAll;
- (BOOL)canInstallAppWithRating:(long long)a0;

@end
