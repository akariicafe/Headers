@class NSURLSession, NSString, NSOperationQueue, HMIHomeKitClient;

@interface HMIFeedbackSession : HMFObject <NSURLSessionDelegate, HMFLogging>

@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) NSURLSession *session;
@property (readonly) NSString *feedbackServiceHost;
@property (readonly) HMIHomeKitClient *homeKitClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;

@end
