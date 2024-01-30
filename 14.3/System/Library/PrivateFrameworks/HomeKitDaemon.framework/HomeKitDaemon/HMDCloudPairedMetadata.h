@class NSArray, NSDictionary, NSString, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDCloudPairedMetadata : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier;
@property (readonly, nonatomic) NSArray *versionConfigurations;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)__decodeVersionConfigurationWithVersionString:(id)a0 versionConfigurationValue:(id)a1 baseAccessoryIdentifier:(id)a2;
+ (id)_decodeVersionConfigurationsFromJSONDictionary:(id)a0 baseAccessoryIdentifier:(id)a1 allowUnzippedData:(BOOL)a2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithBaseAccessoryIdentifier:(id)a0 data:(id)a1;
- (id)initWithBaseAccessoryIdentifier:(id)a0 data:(id)a1 allowUnzippedData:(BOOL)a2;
- (id)initWithBaseAccessoryIdentifier:(id)a0 versionConfigurations:(id)a1;

@end
