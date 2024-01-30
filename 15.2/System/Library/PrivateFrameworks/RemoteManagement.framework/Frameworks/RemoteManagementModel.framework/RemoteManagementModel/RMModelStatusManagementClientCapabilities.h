@class NSSet, NSArray, RMModelStatusManagementClientCapabilities_SupportedPayloads, RMModelAnyPayload;

@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSArray *statusSupportedVersions;
@property (copy, nonatomic) RMModelAnyPayload *statusSupportedFeatures;
@property (copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloads *statusSupportedPayloads;

+ (id)buildWithSupportedVersions:(id)a0 supportedFeatures:(id)a1 supportedPayloads:(id)a2;
+ (id)buildRequiredOnlyWithSupportedVersions:(id)a0 supportedFeatures:(id)a1 supportedPayloads:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
