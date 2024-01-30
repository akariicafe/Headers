@class SIRINLUINTERNALSNLCSNLCParserRequest, NSArray;

@interface CDMSNLCProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserRequest *parserRequest;
@property (readonly, nonatomic) NSArray *rewrittenUtterances;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithParserRequest:(id)a0 rewrittenUtterances:(id)a1;

@end
