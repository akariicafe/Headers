@class SIRINLUINTERNALQUERYREWRITEQRRequest;

@interface CDMQRRequestCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALQUERYREWRITEQRRequest *qrRequest;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithQRRequest:(id)a0;

@end
