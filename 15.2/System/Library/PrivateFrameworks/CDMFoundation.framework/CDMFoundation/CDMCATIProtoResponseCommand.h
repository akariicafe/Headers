@class SIRINLUINTERNALCATICATIResponse;

@interface CDMCATIProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALCATICATIResponse *response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)commandName;

@end
