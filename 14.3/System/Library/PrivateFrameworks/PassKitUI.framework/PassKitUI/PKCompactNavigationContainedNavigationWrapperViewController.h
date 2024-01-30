@class PKCompactNavigationContainerController;

@interface PKCompactNavigationContainedNavigationWrapperViewController : PKWrapperViewController {
    PKCompactNavigationContainerController *_parentViewController;
}

@property (nonatomic) BOOL useParentSafeAreaInsets;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void).cxx_destruct;
- (id)initWithWrappedViewController:(id)a0 parentViewController:(id)a1;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;

@end
