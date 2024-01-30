@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription>

@property long long resultType;
@property long long secondaryResultType;
@property unsigned int skipOrder;
@property unsigned int passFlags;
@property unsigned int dropFlags;
@property unsigned int controlUnit;
@property (copy) NSString *interfaceName;
@property (copy) NSUUID *agentUUID;
@property (copy) NSUUID *serviceUUID;
@property unsigned int serviceData;
@property (copy) NSArray *routeRules;

+ (id)drop;
+ (id)scopedNetworkAgent:(id)a0;
+ (id)netAgentUUID:(id)a0;
+ (id)skipWithOrder:(unsigned int)a0;
+ (id)scopeToDirectInterface;
+ (id)passWithFlags:(unsigned int)a0;
+ (id)tunnelIPToInterfaceName:(id)a0 secondaryResultType:(long long)a1;
+ (id)divertSocketToControlUnit:(unsigned int)a0;
+ (id)filterWithControlUnit:(unsigned int)a0;
+ (id)allowUnentitled;
+ (id)triggerScopedService:(id)a0 data:(unsigned int)a1;
+ (id)routeRules:(id)a0;
+ (id)dropWithFlags:(unsigned int)a0;
+ (id)scopeSocketToInterfaceName:(id)a0;
+ (id)pass;
+ (id)removeNetworkAgentUUID:(id)a0;
+ (id)prohibitFilters;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)validate;
- (unsigned char)resultTypeValue;
- (id)resultTypeString;
- (id)description;
- (id)initInternal;
- (BOOL)addTLVsToMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)secondaryResultTypeString;
- (unsigned char)secondaryResultTypeValue;

@end
