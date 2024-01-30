@class NSArray, SIRINLUINTERNALTOKENIZERTokenizerResponse;

@interface CDMTokenizationProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *response;
@property (retain, nonatomic) NSArray *responses;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponses:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)commandName;

@end
