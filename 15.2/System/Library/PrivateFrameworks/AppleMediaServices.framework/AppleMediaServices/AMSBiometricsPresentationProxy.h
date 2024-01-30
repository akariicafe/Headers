@class NSString, AMSURLSession, NSURLSessionTask;

@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate>

@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSURLSessionTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
