@class FBSDisplayLayoutMonitor;

@interface SMUSystemDisplayLayoutMonitor : NSObject

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (copy, nonatomic) id /* block */ transitionHandler;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleUpdatedLayout:(id)a0 transitionContext:(id)a1;

@end
