@class HKObjectType;

@interface WFHealthKitAuthorizationUnit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKObjectType *objectType;
@property (readonly, nonatomic) long long accessType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjectType:(id)a0 accessType:(long long)a1;

@end
