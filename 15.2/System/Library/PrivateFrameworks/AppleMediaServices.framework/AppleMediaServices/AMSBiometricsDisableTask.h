@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)perform;

@end
