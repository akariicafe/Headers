@class NSURLSessionTask, ACAccount, AMSURLSession;

@interface AMSBiometricsIdentityMapChangeTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;

- (id)initWithAccount:(id)a0 session:(id)a1 task:(id)a2;
- (void).cxx_destruct;
- (id)perform;

@end
