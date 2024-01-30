@class NSArray, NSDictionary, NSString, NSDate, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, nonatomic) NSDate *lastModifiedTime;
@property (readonly, nonatomic) NSArray *lanRules;
@property (readonly, nonatomic, getter=hasFullAccessToLAN) BOOL fullAccessLAN;
@property (readonly, nonatomic) NSArray *wanRules;
@property (readonly, nonatomic, getter=hasFullAccessToWAN) BOOL fullAccessWAN;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) BOOL hasAirplayRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)__decodeFullAccessFromNetworkDeclarations:(id)a0 key:(id)a1 fullAccess:(BOOL *)a2;
+ (BOOL)__decodeNetworkDeclarationsFromJSONDictionary:(id)a0 networkDeclarations:(id *)a1;
+ (id)__decodeRulesFromNetworkDeclarations:(id)a0 key:(id)a1 class:(Class)a2 required:(BOOL)a3;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessoryIdentifier:(id)a0 jsonDictionary:(id)a1;
- (id)initWithAccessoryIdentifier:(id)a0 lastModifiedTime:(id)a1 fullAccessLAN:(BOOL)a2 lanRules:(id)a3 fullAccessWAN:(BOOL)a4 wanRules:(id)a5;

@end
