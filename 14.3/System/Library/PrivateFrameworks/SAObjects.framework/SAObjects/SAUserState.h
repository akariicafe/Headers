@class NSString, NSNumber, SAUserTokenStatus;

@interface SAUserState : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL ageVerificationRequired;
@property (copy, nonatomic) NSString *defaultMediaPlaybackAppBundleIdentifier;
@property (copy, nonatomic) NSString *iTunesMatchSubscriptionStatus;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *syncSharedUserId;
@property (copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property (copy, nonatomic) NSString *userToken;
@property (retain, nonatomic) SAUserTokenStatus *userTokenStatus;
@property (copy, nonatomic) NSString *xpAbCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userState;
+ (id)userStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
