@class NSURL, NSString, ACFHTTPMethod;

@interface ACFHTTPMethodInvocation : NSObject <ACFRunLoopScheduling>

@property (readonly, retain) id internal;
@property BOOL isWaitingForResponse;
@property id delegate;
@property (readonly, retain) ACFHTTPMethod *method;
@property (readonly, retain) NSURL *url;
@property (readonly) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)invocation;
+ (id)invokeHTTPMethodSynchronously:(id)a0 withURL:(id)a1 timeout:(double)a2 result:(id *)a3;
+ (id)invocationWithMethod:(id)a0 url:(id)a1 timeout:(double)a2 delegate:(id)a3 invokeImmediately:(BOOL)a4;

- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (void)invoke;
- (void)connectionDidFinishLoading:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)unscheduleFromRunLoop:(id)a0 forMode:(id)a1;
- (id)init;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)cancel;
- (id)initWithMethod:(id)a0 url:(id)a1 timeout:(double)a2 delegate:(id)a3 invokeImmediately:(BOOL)a4;

@end
