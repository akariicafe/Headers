@class NSError, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MLTask : NSObject

@property long long state;
@property (copy) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;

- (id)initWithState:(long long)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)_canCancel;
- (BOOL)_canComplete;
- (BOOL)_canFail;
- (BOOL)_canResume;
- (BOOL)_canSuspend;
- (void)_resumeWithTaskContext:(id)a0;
- (void)completeWithTaskContext:(id)a0;
- (void)failWithError:(id)a0 taskContext:(id)a1;
- (void)resumeWithTaskContext:(id)a0;
- (void)suspendWithTaskContext:(id)a0;
- (id)taskStatesToString:(long long)a0;

@end
