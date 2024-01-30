@class NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>

@property long long action;
@property (copy) NSString *interfaceName;
@property long long type;

+ (id)routeRuleWithAction:(long long)a0 forInterfaceName:(id)a1;
+ (id)routeRuleWithAction:(long long)a0 forType:(long long)a1;

- (BOOL)addTLVsToMessage:(id)a0;
- (id)initInternal;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned char)typeValue;
- (BOOL)validate;
- (id)actionString;
- (unsigned char)actionValue;
- (id)description;
- (id)typeString;

@end
