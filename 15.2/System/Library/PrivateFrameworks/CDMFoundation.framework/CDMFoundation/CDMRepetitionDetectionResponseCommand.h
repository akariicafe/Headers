@class SIRINLUINTERNALQUERYREWRITEQRResponse;

@interface CDMRepetitionDetectionResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALQUERYREWRITEQRResponse *response;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)commandName;

@end
