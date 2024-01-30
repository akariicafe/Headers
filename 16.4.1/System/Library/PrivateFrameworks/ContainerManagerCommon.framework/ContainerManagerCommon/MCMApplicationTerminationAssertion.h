@class RBSTerminationAssertion;

@interface MCMApplicationTerminationAssertion : NSObject

@property (retain, nonatomic) RBSTerminationAssertion *termAssertion;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 reason:(id)a1;

@end
