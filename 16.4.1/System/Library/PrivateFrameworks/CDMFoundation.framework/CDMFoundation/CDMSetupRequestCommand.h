@class NLXSchemaNLXClientEventMetadata, CDMDynamicConfig;

@interface CDMSetupRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) CDMDynamicConfig *dynamicConfig;
@property (readonly, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;

+ (id)setupWithLanguageCode:(id)a0;

- (void).cxx_destruct;
- (id)initWithDynamicConfig:(id)a0;
- (id)initWithDynamicConfig:(id)a0 selfMetadata:(id)a1;

@end
