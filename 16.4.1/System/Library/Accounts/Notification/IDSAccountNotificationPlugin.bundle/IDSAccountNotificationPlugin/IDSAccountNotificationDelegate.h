@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IDSAccountNotificationDelegate : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _setupRequestPending;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_iTunesSignOut;
- (void)_gameCenterSignOut;
- (void)_iCloudSignInBasedOnAccount:(id)a0 inStore:(id)a1;
- (void)_iCloudSignOut;
- (void)_gameCenterModifyBasedOnUsername:(id)a0;
- (void)_iCloudModifyBasedOnUsername:(id)a0;
- (id)_passwordEquivalentTokenFromAccount:(id)a0;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (id)_findExistingIdentityServicesACAccountWithUserName:(id)a0 inStore:(id)a1;
- (void)_gameCenterSignInBasedOnAccount:(id)a0 inStore:(id)a1;
- (void)_iTunesSignInBasedOnAccount:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
