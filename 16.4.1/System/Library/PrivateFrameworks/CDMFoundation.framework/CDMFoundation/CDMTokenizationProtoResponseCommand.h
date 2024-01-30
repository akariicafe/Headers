@class NSArray, SIRINLUINTERNALTOKENIZERTokenizerResponse;

@interface CDMTokenizationProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALTOKENIZERTokenizerResponse *response;
@property (retain, nonatomic) NSArray *responses;
@property (retain, nonatomic) NSArray *previousSiriResponseTokenResponses;

- (id)initWithResponses:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPreviousResponses:(id)a0 withPreviousSiriResponse:(id)a1;

@end
