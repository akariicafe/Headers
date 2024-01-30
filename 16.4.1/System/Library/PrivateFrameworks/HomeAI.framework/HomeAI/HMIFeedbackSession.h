@class NSURLSession, NSString, NSOperationQueue, HMIHomeKitClient;

@interface HMIFeedbackSession : HMFObject <HMFLogging, NSURLSessionDelegate>

@property (readonly) HMIHomeKitClient *homeKitClient;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) NSURLSession *session;
@property (readonly) NSString *feedbackServiceHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
