@class NSThread, NSArray, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface APNSURLSessionTaskInfo : NSObject

@property (retain) NSThread *thread;
@property (retain) NSArray *modes;
@property (readonly) NSURLSessionDataTask *task;
@property (weak) id<NSURLSessionDataDelegate> delegate;

- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)perform:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)performBlockOnClientThread:(id /* block */)a0;
- (id)initWithTask:(id)a0 delegate:(id)a1 modes:(id)a2;

@end
