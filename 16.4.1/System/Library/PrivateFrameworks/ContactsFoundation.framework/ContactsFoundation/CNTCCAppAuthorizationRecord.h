@class NSString;

@interface CNTCCAppAuthorizationRecord : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) long long recordType;
@property (nonatomic) long long authorizationStatus;

+ (unsigned long long)authorizationRightFromAuthorizationStatus:(long long)a0;
+ (long long)authorizationStatusFromAuthorizationRight:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithTCCAuthorizationRecord:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1 recordType:(long long)a2 authorizationStatus:(long long)a3;

@end
