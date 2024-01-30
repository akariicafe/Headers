@class NSArray, NSDictionary, NSString, NSDate, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, nonatomic) NSDate *lastModifiedTime;
@property (readonly, nonatomic) NSArray *lanRules;
@property (readonly, nonatomic, getter=hasFullAccessToLAN) BOOL fullAccessLAN;
@property (readonly, nonatomic) NSArray *wanRules;
@property (readonly, nonatomic, getter=hasFullAccessToWAN) BOOL fullAccessWAN;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)__decodeNetworkDeclarationsFromJSONDictionary:(id)a0 networkDeclarations:(id *)a1;
+ (BOOL)__decodeFullAccessFromNetworkDeclarations:(id)a0 key:(id)a1 fullAccess:(BOOL *)a2;
+ (id)__decodeRulesFromNetworkDeclarations:(id)a0 key:(id)a1 class:(Class)a2 required:(BOOL)a3;

@end
