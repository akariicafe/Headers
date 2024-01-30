@class NSXPCListenerEndpoint, NSXPCConnection, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface PRPersonaStore : NSObject {
    NSXPCConnection *_personaServiceConnection;
    NSLock *_connectionLock;
    NSLock *_dataVendingFlagLock;
    BOOL _hasVendedData;
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
}

@property (readonly, nonatomic) BOOL hasVendedData;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)currentLikenessForPrimaryiCloudAccountWithDesiredFreshness:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)allLikenessesForPrimaryiCloudAccountWithCompletion:(id /* block */)a0;
- (void)likenessForEmailAddress:(id)a0 desiredFreshness:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)likenessForPhoneNumber:(id)a0 desiredFreshness:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)saveLikeness:(id)a0 forPrimayiCloudAccountWithCompletion:(id /* block */)a1;
- (void)changeCurrentSelfLikenessToLikenessWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)removeLikeness:(id)a0 forPrimayiCloudAccountWithCompletion:(id /* block */)a1;
- (void)removeAllLikenessForPrimaryiCloudAccountWithCompletion:(id /* block */)a0;
- (void)donateLikeness:(id)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)donateLikeness:(id)a0 forPhoneNumber:(id)a1 completion:(id /* block */)a2;
- (void)likenessesWithExternalIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)handleAppleIDEvent:(unsigned long long)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)screenNameForPrimaryiCloudAccountWithCompletion:(id /* block */)a0;
- (void)screenNameForAppleIDWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)screenNameForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)screenNameForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)setScreenName:(id)a0 forAppleIDWithAltDSID:(id)a1 completion:(id /* block */)a2;
- (void)setScreenName:(id)a0 forPrimaryiCloudAccountWithCompletion:(id /* block */)a1;
- (id)initWithServiceListenerEndpoint:(id)a0;
- (void)_startListeningForCacheChangeNotifications;
- (void)_stopListeningForCacheChangeNotifications;
- (void)_setHasVendedData:(BOOL)a0;
- (void)currentLikenessForPrimaryiCloudAccountWithCompletion:(id /* block */)a0;
- (void)likenessForPhoneNumber:(id)a0 completion:(id /* block */)a1;
- (void)likenessForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)setLikeness:(id)a0 forPrimayiCloudAccountWithCompletion:(id /* block */)a1;
- (unsigned char)likenessVersionDigestForEmail:(id)a0;
- (unsigned char)likenessVersionDigestForPhoneNumber:(id)a0;
- (void)setLikenessVersionDigest:(unsigned char)a0 forEmail:(id)a1;
- (void)setLikenessVersionDigest:(unsigned char)a0 forPhoneNumber:(id)a1;
- (id)likenessDataForPropagationToRecipient:(id)a0 lastContactDate:(id)a1;
- (void)donateLikenessData:(id)a0 forSenderID:(id)a1 isPhoneNumber:(BOOL)a2;
- (id)likenessWithUniqueID:(id)a0;

@end
