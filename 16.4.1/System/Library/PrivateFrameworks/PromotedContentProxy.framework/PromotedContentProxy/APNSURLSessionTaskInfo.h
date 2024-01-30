@class NSThread, NSArray, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface APNSURLSessionTaskInfo : NSObject

@property (retain) NSThread *thread;
@property (retain) NSArray *modes;
@property (readonly) NSURLSessionDataTask *task;
@property (weak) id<NSURLSessionDataDelegate> delegate;

- (void)performBlockAndWait:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0 delegate:(id)a1 modes:(id)a2;
- (void)perform:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)performBlockOnClientThread:(id /* block */)a0;

@end
