@class UIViewController, NSMutableArray;

@interface UIStoryboardUnwindSegueSource : NSObject {
    NSMutableArray *_searchChain;
}

@property (readonly) UIViewController *sourceViewController;
@property (readonly) SEL unwindAction;
@property (readonly) id sender;

- (id)init;
- (void).cxx_destruct;
- (id)_childContainingUnwindSourceForViewController:(id)a0;
- (id)_initWithSourceViewController:(id)a0 action:(SEL)a1 sender:(id)a2;
- (id)_findDestination;

@end
