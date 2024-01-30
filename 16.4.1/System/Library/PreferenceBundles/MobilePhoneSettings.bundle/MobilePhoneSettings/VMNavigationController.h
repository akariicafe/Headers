@class VMVoicemailManager;

@interface VMNavigationController : UINavigationController

@property (readonly, nonatomic) VMVoicemailManager *manager;

- (id)initWithManager:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;

@end
