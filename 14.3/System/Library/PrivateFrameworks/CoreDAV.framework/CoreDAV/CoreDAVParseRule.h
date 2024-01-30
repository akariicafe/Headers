@class NSString;

@interface CoreDAVParseRule : NSObject

@property (readonly, nonatomic) long long minimumNumber;
@property (readonly, nonatomic) long long maximumNumber;
@property (readonly, nonatomic) NSString *nameSpace;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic) SEL setterMethod;

+ (id)ruleWithMinimumNumber:(long long)a0 maximumNumber:(long long)a1 nameSpace:(id)a2 elementName:(id)a3 objectClass:(Class)a4 setterMethod:(SEL)a5;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMinimumNumber:(long long)a0 maximumNumber:(long long)a1 nameSpace:(id)a2 elementName:(id)a3 objectClass:(Class)a4 setterMethod:(SEL)a5;

@end
