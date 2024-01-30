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
+ (id)pass;
+ (id)filterWithControlUnit:(unsigned int)a0;
+ (id)routeRules:(id)a0;
+ (id)dropWithFlags:(unsigned int)a0;
+ (id)divertSocketToControlUnit:(unsigned int)a0;
+ (id)scopedNetworkAgent:(id)a0;
+ (id)skipWithOrder:(unsigned int)a0;
+ (id)passWithFlags:(unsigned int)a0;
+ (id)scopeSocketToInterfaceName:(id)a0;
+ (id)allowUnentitled;
+ (id)triggerScopedService:(id)a0 data:(unsigned int)a1;
+ (id)netAgentUUID:(id)a0;
+ (id)prohibitFilters;
+ (id)scopeToDirectInterface;
+ (id)tunnelIPToInterfaceName:(id)a0 secondaryResultType:(long long)a1;

- (BOOL)addTLVsToMessage:(id)a0;
- (id)initInternal;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (unsigned char)secondaryResultTypeValue;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)secondaryResultTypeString;
- (id)description;
- (id)resultTypeString;
- (unsigned char)resultTypeValue;

@end
