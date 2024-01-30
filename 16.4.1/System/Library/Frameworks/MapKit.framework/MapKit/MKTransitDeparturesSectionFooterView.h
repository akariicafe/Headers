@class MKButtonWithTargetArgument, NSLayoutConstraint;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorCell {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly, nonatomic) MKButtonWithTargetArgument *button;

+ (double)defaultHeight;
+ (id)_font;

- (void)_contentSizeCategoryDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateConstraintValues;

@end
