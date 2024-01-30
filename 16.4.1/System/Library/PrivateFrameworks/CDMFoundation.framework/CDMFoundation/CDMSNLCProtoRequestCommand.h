@class SIRINLUINTERNALSNLCSNLCParserRequest, SIRINLUEXTERNALRewriteMessage;

@interface CDMSNLCProtoRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALSNLCSNLCParserRequest *parserRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)a0 rewriteMsg:(id)a1;

@end
