@class NSString, NSArray, NSDictionary, NSDate, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDNetworkRouterFirewallRuleCloudNetworkDeclarations : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *lastModifiedTime;
@property (readonly, nonatomic) NSArray *ruleConfigurations;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)__decodeRuleConfigurationWithVersionString:(id)a0 ruleConfigurationValue:(id)a1 baseAccessoryIdentifier:(id)a2;
+ (id)__decodeRuleConfigurationsFromJSONDictionary:(id)a0 baseAccessoryIdentifier:(id)a1 allowUnzippedData:(BOOL)a2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithBaseAccessoryIdentifier:(id)a0 data:(id)a1;
- (id)initWithBaseAccessoryIdentifier:(id)a0 data:(id)a1 allowUnzippedData:(BOOL)a2;
- (id)initWithBaseAccessoryIdentifier:(id)a0 name:(id)a1 lastModifiedTime:(id)a2 ruleConfigurations:(id)a3;

@end
