@class NSString, NSBundle;

@interface WFObjectType : WFType

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) Class objectClass;
@property (readonly, copy, nonatomic) NSString *string;

+ (BOOL)supportsSecureCoding;
+ (id)typeWithClassName:(id)a0 frameworkName:(id)a1 location:(unsigned long long)a2;
+ (id)typeWithClass:(Class)a0;
+ (id)typesWithClasses:(id)a0;

- (void).cxx_destruct;
- (id)initWithObjectClass:(Class)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToClass:(Class)a0;
- (BOOL)isEqualToType:(id)a0;
- (BOOL)conformsToClass:(Class)a0;
- (id)initWithClassName:(id)a0 inBundle:(id)a1;

@end
