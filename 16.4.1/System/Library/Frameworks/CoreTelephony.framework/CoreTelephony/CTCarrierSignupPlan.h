@class NSString;

@interface CTCarrierSignupPlan : CTPlan

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 type:(id)a1;

@end
