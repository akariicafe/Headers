@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription> {
    unsigned int _skipOrder;
    unsigned int _passFlags;
    unsigned int _dropFlags;
    unsigned int _controlUnit;
    unsigned int _serviceData;
    long long _secondaryResultType;
    NSString *_interfaceName;
    NSUUID *_agentUUID;
    NSArray *_routeRules;
}

@property long long resultType;

+ (id)scopeToDirectInterface;
+ (id)divertSocketToControlUnit:(unsigned int)a0;
+ (id)drop;
+ (id)scopedNetworkAgent:(id)a0;
+ (id)scopeSocketToInterfaceName:(id)a0;
+ (id)skipWithOrder:(unsigned int)a0;
+ (id)pass;
+ (id)prohibitFilters;
+ (id)dropWithFlags:(unsigned int)a0;
+ (id)filterWithControlUnit:(unsigned int)a0;
+ (id)removeNetworkAgentUUID:(id)a0;
+ (id)netAgentUUID:(id)a0;
+ (id)tunnelIPToInterfaceName:(id)a0 secondaryResultType:(long long)a1;
+ (id)passWithFlags:(unsigned int)a0;
+ (id)allowUnentitled;
+ (id)routeRules:(id)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
