@class NSString, NSDictionary;

@interface ATXCustomIntentDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)createIntent;
- (id)description;
- (id)initWithTypeName:(id)a0 parameters:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
