@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {
    NSConditionLock *_doneCondition;
    BOOL _shouldRetryRequest;
    BOOL _alwaysReportFailures;
}

- (void).cxx_destruct;
- (id)init;
- (void)setDone:(BOOL)a0;
- (void)waitUntilDone;
- (void)actionFailed:(long long)a0 forTask:(id)a1 error:(id)a2;
- (BOOL)shouldRetryRequest;
- (id)initWithAlwaysReportFailures:(BOOL)a0;
- (void)taskFailed:(id)a0 statusCode:(long long)a1 error:(id)a2;
- (BOOL)waitUntilDoneBeforeDate:(id)a0;

@end
