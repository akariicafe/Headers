@class NSString, BKSProcessAssertion, SSXPCConnection, NSObject;
@protocol SSRequestDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface SSRequest : NSObject <SSXPCCoding> {
    long long _backgroundTaskIdentifier;
    BOOL _cancelAfterTaskExpiration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
    NSObject<OS_dispatch_source> *_backgroundTaskExpirationTimer;
    long long _callState;
    id /* block */ _completionBlock;
    BKSProcessAssertion *_taskAssertion;
    BOOL _taskAssertionTaken;
}

@property (nonatomic) BOOL shouldCancelAfterTaskExpiration;
@property (weak, nonatomic) id<SSRequestDelegate> delegate;
@property (nonatomic) BOOL usesTaskCompletionAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_allowMultipleCallbacks;

- (void)disconnect;
- (BOOL)start;
- (void)_expireBackgroundTask;
- (void).cxx_destruct;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)_shutdownRequest;
- (void)_startWithMessageID:(long long)a0 messageBlock:(id /* block */)a1;
- (id)_initSSRequest;
- (void)_shutdownRequestWithMessageID:(long long)a0;
- (void)__beginBackgroundTask;
- (void)__endBackgroundTask;
- (void)_endBackgroundTask;
- (void)_cancelBackgroundTaskExpirationTimer;
- (void)_beginBackgroundTask;
- (void)dealloc;
- (void)cancel;

@end
