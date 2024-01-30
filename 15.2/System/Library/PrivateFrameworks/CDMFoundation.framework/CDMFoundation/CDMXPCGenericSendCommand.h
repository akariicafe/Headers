@class NSString, CDMNLXResponse, SIRINLUINTERNALPreprocessingWrapper, SIRINLUResponse;

@interface CDMXPCGenericSendCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;
@property (readonly, nonatomic) CDMNLXResponse *nlxResponse;
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithNLXResponse:(id)a0 clientId:(id)a1;
- (id)initWithNLUResponseDeprecated:(id)a0 shouldConvertNLXResponse:(BOOL)a1 clientId:(id)a2;
- (id)initWithError:(id)a0 clientId:(id)a1;
- (id)initWithPreprocessingWrapper:(id)a0 clientId:(id)a1;

@end
