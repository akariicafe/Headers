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
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)_expireBackgroundTask;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)start;
- (void).cxx_destruct;
- (void)__beginBackgroundTask;
- (void)__endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_cancelBackgroundTaskExpirationTimer;
- (void)_endBackgroundTask;
- (id)_initSSRequest;
- (void)_shutdownRequest;
- (void)_shutdownRequestWithMessageID:(long long)a0;
- (void)_startWithMessageID:(long long)a0 messageBlock:(id /* block */)a1;

@end
