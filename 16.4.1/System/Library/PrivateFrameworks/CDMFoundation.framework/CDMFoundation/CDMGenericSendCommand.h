@class CDMNluResponse, NSString, CDMEmbeddingGraphResponseCommand, SIRINLUINTERNALPreprocessingWrapper, SIRINLUResponse;

@interface CDMGenericSendCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;
@property (readonly, nonatomic) CDMNluResponse *cdmNluResponse;
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;
@property (readonly, nonatomic) CDMEmbeddingGraphResponseCommand *embeddingResponse;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmbeddingGraphResponse:(id)a0;
- (id)initWithCDMNluResponse:(id)a0 clientId:(id)a1;
- (id)initWithError:(id)a0 clientId:(id)a1;
- (id)initWithPreprocessingWrapper:(id)a0 clientId:(id)a1;

@end
