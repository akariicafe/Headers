@class NSArray, UIView;

@interface _UIInterfaceActionGroupHeaderScrollView : _UIAlertControllerShadowedScrollView {
    NSArray *_constraints;
}

@property (readonly, nonatomic) UIView *contentView;

- (id)initWithContentView:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)accessoryInsetsDidChange:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)_contentFitCanScrollThreshold;

@end
