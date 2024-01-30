@class AMSURLTaskInfo, AMSPromise, NSURLResponse;

@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject

@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (retain, nonatomic) AMSPromise *pendingPromise;
@property (nonatomic) BOOL ignoringResult;

- (void).cxx_destruct;

@end
