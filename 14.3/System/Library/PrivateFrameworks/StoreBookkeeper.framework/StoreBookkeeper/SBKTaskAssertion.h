@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {
    id /* block */ _expireHandler;
    NSString *_debugInfo;
    SBKProcessAssertion *_processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(id /* block */)a0 debugInfo:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithExpirationHandler:(id /* block */)a0 debugInfo:(id)a1;
- (void)performExpirationHandler;

@end
