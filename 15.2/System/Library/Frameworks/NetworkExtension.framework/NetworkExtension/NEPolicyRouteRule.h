@class NSString, NSUUID;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>

@property long long action;
@property (copy) NSString *interfaceName;
@property (copy) NSUUID *matchNetworkAgent;
@property long long type;
@property (retain) NSUUID *networkAgentUUID;
@property unsigned int controlUnit;

+ (id)routeRuleWithAction:(long long)a0 forInterfaceName:(id)a1;
+ (id)routeRuleWithAction:(long long)a0 forNetworkAgent:(id)a1;
+ (id)routeRuleWithAction:(long long)a0 forType:(long long)a1;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)validate;
- (id)actionString;
- (id)description;
- (id)typeString;
- (id)initInternal;
- (BOOL)addTLVsToMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned char)actionValue;
- (unsigned char)typeValue;

@end
