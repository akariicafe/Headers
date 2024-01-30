@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;

- (id)perform;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
