@class VMVoicemailManager;

@interface VMNavigationController : UINavigationController

@property (readonly, nonatomic) VMVoicemailManager *manager;

- (id)initWithManager:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
