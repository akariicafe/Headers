@class SIRINLUINTERNALQUERYREWRITEQRRequest;

@interface CDMRepetitionDetectionRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALQUERYREWRITEQRRequest *qrRequest;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithQRRequest:(id)a0;

@end
