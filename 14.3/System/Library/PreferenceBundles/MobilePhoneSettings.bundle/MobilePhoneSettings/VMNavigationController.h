@class VMVoicemailManager;

@interface VMNavigationController : UINavigationController

@property (readonly, nonatomic) VMVoicemailManager *manager;

- (id)initWithManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;

@end
