@class NSString, NSDictionary;

@interface OKActionCustom : OKAction <OKActionCustomExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *attributes;

+ (void)setupJavascriptContext:(id)a0;
+ (id)customActionWithName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
