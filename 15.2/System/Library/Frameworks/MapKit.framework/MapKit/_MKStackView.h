@class NSArray, NSHashTable;
@protocol _MKStackViewDelegate, _MKAnimationStackViewDelegate;

@interface _MKStackView : UIView {
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
}

@property (weak, nonatomic) id<_MKStackViewDelegate> stackDelegate;
@property (weak, nonatomic) id<_MKAnimationStackViewDelegate> stackAnimationDelegate;
@property (copy, nonatomic) NSArray *stackedSubviews;
@property (nonatomic) BOOL bottomConstraintShouldBeGreaterThanOrEqual;

- (void)_createConstraints;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStackedSubviews:(id)a0 animated:(BOOL)a1;
- (void)setStackedSubviews:(id)a0 animated:(BOOL)a1 isNeedLayout:(BOOL)a2;
- (void).cxx_destruct;

@end
