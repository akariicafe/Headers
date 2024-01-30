@class NSString;
@protocol ENTProtocol;

@interface EDAMUserStoreClient : NSObject <EDAMUserStore> {
    id<ENTProtocol> _inProtocol;
    id<ENTProtocol> _outProtocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProtocol:(id)a0;
- (void).cxx_destruct;
- (id)getSubscriptionInfo:(id)a0;
- (id)initWithInProtocol:(id)a0 outProtocol:(id)a1;
- (id)getPremiumInfo:(id)a0;
- (id)authenticate:(id)a0 password:(id)a1 consumerKey:(id)a2 consumerSecret:(id)a3 supportsTwoFactor:(BOOL)a4;
- (id)authenticateLongSession:(id)a0 password:(id)a1 consumerKey:(id)a2 consumerSecret:(id)a3 deviceIdentifier:(id)a4 deviceDescription:(id)a5 supportsTwoFactor:(BOOL)a6;
- (id)authenticateLongSessionV2:(id)a0;
- (id)authenticateOpenID:(id)a0 consumerKey:(id)a1 consumerSecret:(id)a2 deviceIdentifier:(id)a3 deviceDescription:(id)a4 authLongSession:(BOOL)a5 supportsTwoFactor:(BOOL)a6;
- (id)authenticateToBusiness:(id)a0;
- (BOOL)checkVersion:(id)a0 edamVersionMajor:(short)a1 edamVersionMinor:(short)a2;
- (id)completeTwoFactorAuthentication:(id)a0 oneTimeCode:(id)a1 deviceIdentifier:(id)a2 deviceDescription:(id)a3;
- (id)createSessionAuthenticationToken:(id)a0;
- (id)getAccountLimits:(int)a0;
- (id)getBootstrapInfo:(id)a0;
- (id)getConnectedIdentities:(id)a0 identityIds:(id)a1;
- (id)getNoteStoreUrl:(id)a0;
- (id)getPublicUserInfo:(id)a0;
- (id)getUser:(id)a0;
- (id)getUserUrls:(id)a0;
- (void)inviteToBusiness:(id)a0 emailAddress:(id)a1;
- (id)listBusinessInvitations:(id)a0 includeRequestedInvitations:(BOOL)a1;
- (id)listBusinessUsers:(id)a0;
- (id)refreshAuthentication:(id)a0;
- (id)registerForSyncPushNotifications:(id)a0 credentials:(id)a1;
- (void)removeFromBusiness:(id)a0 emailAddress:(id)a1;
- (void)revokeLongSession:(id)a0;
- (void)unregisterForSyncPushNotifications:(id)a0;
- (void)updateBusinessUserIdentifier:(id)a0 oldEmailAddress:(id)a1 newEmailAddress:(id)a2;

@end
