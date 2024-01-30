@class UISplitViewController, UIViewController;

@interface CRNFluidSplitViewInteraction : NSObject {
    UISplitViewController *_splitViewController;
    UIViewController *_supplementalController;
    UIViewController *_primaryController;
}

+ (id)newWithSplitViewController:(id)a0;

- (id /* block */)composerBlock;
- (void).cxx_destruct;

@end
