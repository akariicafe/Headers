@class NSString, RMConfiguration;

@interface RMPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RMConfiguration *configuration;
@property (readonly, nonatomic) NSString *policyKey;

+ (id)policyKeyForConfiguration:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPolicy:(id)a0;

@end
