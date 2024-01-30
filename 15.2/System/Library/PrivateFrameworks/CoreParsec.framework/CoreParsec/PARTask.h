@class PARRequest, PARSession;

@interface PARTask : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) PARSession *session;
@property unsigned long long queryId;
@property (retain, nonatomic) PARRequest *request;

- (void).cxx_destruct;
- (void)resume;

@end
