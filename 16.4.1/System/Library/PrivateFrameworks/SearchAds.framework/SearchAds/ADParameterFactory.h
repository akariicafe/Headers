@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)requestedAdDataParameter;
- (id)privacyDataKeyParameter;
- (id)toroClickCountDataParameter;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)frequencyCapDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)init;
- (void).cxx_destruct;

@end
