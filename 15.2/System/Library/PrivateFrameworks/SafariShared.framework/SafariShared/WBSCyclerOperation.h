@interface WBSCyclerOperation : NSObject {
    unsigned long long _numberOfRemainingAttempts;
    float _backoffRatio;
}

@property (copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic) double nextBackoffTimeInterval;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaximumNumberOfAttempts:(unsigned long long)a0 backoffRatio:(float)a1;
- (void)executeWithResultHandler:(id /* block */)a0;

@end
