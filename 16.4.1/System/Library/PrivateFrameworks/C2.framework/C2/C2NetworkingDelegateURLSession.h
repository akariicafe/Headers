@class NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject;
@protocol C2NetworkingDelegate, C2RequestDelegate, NSURLSessionDelegate;

@interface C2NetworkingDelegateURLSession : NSObject

@property (weak, nonatomic) id<NSURLSessionDelegate, C2RequestDelegate> sessionDelegate;
@property (retain) NSOperationQueue *delegateQueue;
@property (copy) NSURLSessionConfiguration *configuration;
@property (weak, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (copy) NSString *sessionDescription;

+ (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;

- (id)dataTaskWithRequest:(id)a0;
- (void)invalidateAndCancel;
- (void)_useTLSSessionCacheFromSession:(id)a0;
- (void).cxx_destruct;

@end
