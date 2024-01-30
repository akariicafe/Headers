@class SIRINLUINTERNALSPANMATCHSpanMatchResponse;

@interface CDMSpanMatchProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)commandName;

@end
