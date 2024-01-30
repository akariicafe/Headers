@class NSString;

@interface HMDNetworkRouterFirewallRuleManagerOverrideParser : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)parseFromData:(id)a0;
+ (id)_parseOverrideNetworkDeclarationsWithProductGroup:(id)a0 productNumber:(id)a1 productNumberDictionary:(id)a2 accessoryIdentifier:(id)a3;
+ (id)_parseOverridePairedMetadataWithProductGroup:(id)a0 productNumber:(id)a1 productNumberDictionary:(id)a2 accessoryIdentifier:(id)a3;


@end
