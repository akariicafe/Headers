@class NSString, NSDictionary;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)createIntent;
- (id)initWithTypeName:(id)a0 parameters:(id)a1;

@end
