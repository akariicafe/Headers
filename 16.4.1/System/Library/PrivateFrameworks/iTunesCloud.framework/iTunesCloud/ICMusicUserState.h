@class NSString, ICMusicUserStateCookies, ICMusicLibraryAuthTokenStatus, ICMusicSubscriptionStatus, ICDelegateToken, ICLightweightMusicSubscriptionStatus;

@interface ICMusicUserState : NSObject <ICMutableMusicUserState, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *carrierBundleDeviceID;
@property (copy, nonatomic) ICMusicLibraryAuthTokenStatus *libraryAuthTokenStatus;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;
@property (copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;
@property (nonatomic) long long cloudLibrarySyncStatus;
@property (nonatomic) BOOL usesListeningHistory;
@property (copy, nonatomic) ICMusicUserStateCookies *cookies;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly, nonatomic) BOOL isDelegated;
@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
