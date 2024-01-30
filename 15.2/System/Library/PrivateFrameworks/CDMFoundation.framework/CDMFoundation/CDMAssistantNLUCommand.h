@class NSString, SIRINLUEXTERNALCDMNluRequest, NLXSchemaNLXClientEventMetadata, SIRINLURequest;

@interface CDMAssistantNLUCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLURequest *nluRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;
@property (readonly, nonatomic) BOOL initWithNLURequestCalled;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithNLURequestDeprecated:(id)a0 clientId:(id)a1;
- (id)initWithNLURequest:(id)a0 clientId:(id)a1;

@end
