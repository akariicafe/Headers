@class UIViewController, UIView;

@interface _UIQueuingScrollViewState : _UITransitionState {
    UIViewController *_viewController;
}

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic, getter=isManual) BOOL manual;

- (void).cxx_destruct;
- (id)initWithTransitionDirection:(long long)a0 view:(id)a1 manual:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isCompatibleWithTransitionInDirection:(long long)a0;
- (id)description;

@end
