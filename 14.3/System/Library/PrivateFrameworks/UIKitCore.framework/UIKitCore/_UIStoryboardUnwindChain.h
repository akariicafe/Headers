@class UIViewController, NSMutableArray;

@interface _UIStoryboardUnwindChain : NSObject {
    NSMutableArray *_viewControllers;
    unsigned long long _commonAncestorIdx;
    unsigned long long _modalAncestorContainingSourceIdx;
}

@property (readonly, nonatomic) UIViewController *commonAncestorViewController;
@property (readonly, nonatomic) UIViewController *modalAncestorContainingSourceViewController;

- (void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(id /* block */)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initFromSourceViewController:(id)a0 toDestinationViewController:(id)a1;

@end
