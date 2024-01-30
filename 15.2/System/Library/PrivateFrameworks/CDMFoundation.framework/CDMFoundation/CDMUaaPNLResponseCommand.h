@class NSString, SIRINLUResponse;

@interface CDMUaaPNLResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) SIRINLUResponse *nluResponse;

- (void).cxx_destruct;
- (id)initWithRequestId:(id)a0 nluResponse:(id)a1 error:(id)a2;

@end
