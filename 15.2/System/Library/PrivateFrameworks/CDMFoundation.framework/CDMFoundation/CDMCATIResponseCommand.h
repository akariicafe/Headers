@class SIRINLURequestID, SIRINLUResponse;

@interface CDMCATIResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUResponse *nluResponse;
@property (readonly, nonatomic) SIRINLURequestID *requestID;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithNluResponse:(id)a0;

@end
