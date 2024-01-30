@class SIRINLUINTERNALQUERYREWRITEQRResponse, SIRINLUEXTERNALRewriteMessage;

@interface CDMQRResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALQUERYREWRITEQRResponse *qrResponse;
@property (retain, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg;

+ (id)convertRewriteHypo2RewriteMsgForInfoDomains:(id)a0;

- (id)initWithResponse:(id)a0;
- (void).cxx_destruct;

@end
