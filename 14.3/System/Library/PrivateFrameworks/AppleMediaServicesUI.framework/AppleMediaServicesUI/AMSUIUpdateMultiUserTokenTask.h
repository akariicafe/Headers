@class NSUUID, ACAccount, UIViewController;

@interface AMSUIUpdateMultiUserTokenTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) UIViewController *viewController;

+ (BOOL)_errorIsRecoverable:(id)a0;

- (void).cxx_destruct;
- (id)performTask;
- (id)initWithAccount:(id)a0 homeIdentifier:(id)a1 viewController:(id)a2;

@end
