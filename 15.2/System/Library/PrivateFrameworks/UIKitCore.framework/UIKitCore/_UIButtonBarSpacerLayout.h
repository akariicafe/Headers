@class UIView, NSLayoutConstraint, UIBarButtonItem;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {
    UIBarButtonItem *_item;
    UIView *_spacer;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_minimumSize;
    NSLayoutConstraint *_equalSize;
    BOOL _flexible;
}

@property (readonly, nonatomic) long long spacerType;

+ (long long)typeOfSpacerBetweenLayout:(id)a0 andLayout:(id)a1;
+ (id)spacerForLayoutMetrics:(id)a0 betweenLayout:(id)a1 andLayout:(id)a2;

- (id)initWithLayoutMetrics:(id)a0 barButtonItem:(id)a1;
- (BOOL)isSpaceLayout;
- (void)_addLayoutViews:(id)a0;
- (id)barButtonItem;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (void)_configure;
- (BOOL)suppressSpacing;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLayoutMetrics:(id)a0;

@end
