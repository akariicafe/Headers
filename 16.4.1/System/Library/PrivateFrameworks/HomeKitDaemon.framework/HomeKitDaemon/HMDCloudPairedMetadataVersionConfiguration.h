@class HMDCloudPairedMetadataDiagnostics, NSDictionary, NSString, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, nonatomic) HMDCloudPairedMetadataDiagnostics *diagnostics;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
