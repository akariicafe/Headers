@class UIViewController, NSMutableArray;

@interface UIStoryboardUnwindSegueSource : NSObject {
    NSMutableArray *_searchChain;
}

@property (readonly) UIViewController *sourceViewController;
@property (readonly) SEL unwindAction;
@property (readonly) id sender;

- (void).cxx_destruct;
- (id)init;
- (id)_initWithSourceViewController:(id)a0 action:(SEL)a1 sender:(id)a2;
- (id)_findDestination;
- (id)_childContainingUnwindSourceForViewController:(id)a0;

@end
