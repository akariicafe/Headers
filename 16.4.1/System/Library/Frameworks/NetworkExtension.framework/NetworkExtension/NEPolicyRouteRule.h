@class NSUUID, NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {
    long long _action;
    NSString *_interfaceName;
    NSUUID *_matchNetworkAgent;
    long long _type;
}

@property (retain) NSUUID *networkAgentUUID;
@property unsigned int controlUnit;

+ (id)routeRuleWithAction:(long long)a0 forType:(long long)a1;
+ (id)routeRuleWithAction:(long long)a0 forInterfaceName:(id)a1;
+ (id)routeRuleWithAction:(long long)a0 forNetworkAgent:(id)a1;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
