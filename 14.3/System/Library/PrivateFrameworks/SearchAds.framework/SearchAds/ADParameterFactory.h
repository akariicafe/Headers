@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)init;
- (void).cxx_destruct;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)privacyDataKeyParameter;
- (id)requestedAdDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;

@end
