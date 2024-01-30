@class NSString;

@interface CNTCCAppAuthorizationRecord : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) long long recordType;
@property (nonatomic) long long authorizationStatus;

+ (long long)authorizationStatusFromAuthorizationRight:(unsigned long long)a0;
+ (unsigned long long)authorizationRightFromAuthorizationStatus:(long long)a0;

- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1 recordType:(long long)a2 authorizationStatus:(long long)a3;
- (id)initWithTCCAuthorizationRecord:(id)a0;
- (void).cxx_destruct;

@end
