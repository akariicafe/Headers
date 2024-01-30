@class UISplitViewController, UIViewController;

@interface CRNFluidSplitViewInteraction : NSObject {
    UISplitViewController *_splitViewController;
    UIViewController *_supplementalController;
    UIViewController *_primaryController;
}

+ (id)newWithSplitViewController:(id)a0;

- (void).cxx_destruct;
- (id /* block */)composerBlock;

@end
