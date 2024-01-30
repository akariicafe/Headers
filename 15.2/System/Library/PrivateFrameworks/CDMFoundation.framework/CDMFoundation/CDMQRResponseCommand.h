@class SIRINLUINTERNALQUERYREWRITEQRResponse;

@interface CDMQRResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALQUERYREWRITEQRResponse *qrResponse;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)commandName;

@end
