@class ICURLBag, NSString, ICMusicSubscriptionStatus, ICUserIdentity;

@interface MPCPlaybackAccount : NSObject <NSCopying>

@property (copy, nonatomic) NSString *hashedDSID;
@property (nonatomic) BOOL hasCloudLibraryEnabled;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (nonatomic, getter=isActiveAccount) BOOL activeAccount;
@property (nonatomic, getter=isPrivateListeningEnabled) BOOL privateListeningEnabled;
@property (retain, nonatomic) ICURLBag *bag;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (readonly, nonatomic, getter=isDelegated) BOOL delegated;
@property (readonly, nonatomic) BOOL canAutoPlay;
@property (readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
@property (readonly, nonatomic) BOOL requiresAuthorizationTokenForPlayback;
@property (readonly, nonatomic) BOOL usesLease;

- (id)initWithUserIdentity:(id)a0 subscriptionStatus:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDelegatedUserIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
