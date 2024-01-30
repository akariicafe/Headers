@class MKButtonWithTargetArgument, NSLayoutConstraint;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorCell {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly, nonatomic) MKButtonWithTargetArgument *button;

+ (id)_font;
+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)tintColorDidChange;

@end
