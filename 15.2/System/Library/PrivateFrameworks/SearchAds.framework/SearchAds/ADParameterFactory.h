@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)requestedAdDataParameter;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)privacyDataKeyParameter;
- (void).cxx_destruct;
- (id)init;
- (id)requestedTemplateTypeParameter;
- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;

@end
