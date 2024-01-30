@class NSArray;

@interface CDMSpanMatchProtoRequestCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *spanMatchRequests;
@property (retain, nonatomic) NSArray *asrHypothesis;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)commandName;
- (id)initWithRequests:(id)a0 asrHypothesis:(id)a1;
- (id)initWithRequests:(id)a0;

@end
