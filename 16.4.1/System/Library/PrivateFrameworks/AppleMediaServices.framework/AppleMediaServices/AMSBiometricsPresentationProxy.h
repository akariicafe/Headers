@class NSURLSessionTask, NSString, AMSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSURLSessionTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
