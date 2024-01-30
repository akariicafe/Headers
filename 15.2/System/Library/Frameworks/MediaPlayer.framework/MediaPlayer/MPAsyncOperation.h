@class NSString, NSError, NSObject, ICUserIdentity;
@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void)finish;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;

@end
