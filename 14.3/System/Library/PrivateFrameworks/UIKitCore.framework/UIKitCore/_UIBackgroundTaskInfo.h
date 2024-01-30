@class NSString, BKSProcessAssertion;

@interface _UIBackgroundTaskInfo : NSObject {
    unsigned long long _taskId;
    id /* block */ _expireHandler;
    BKSProcessAssertion *_processAssertion;
    NSString *_taskName;
    long long _creationTime;
    BOOL _alreadyWarnedAboutExpiration;
}

+ (id)backgroundTaskAssertionQueue;

- (id)initWithProcessAssertion:(id)a0 taskName:(id)a1 expirationHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)fireExpirationHandler;
- (void)invalidate;

@end
