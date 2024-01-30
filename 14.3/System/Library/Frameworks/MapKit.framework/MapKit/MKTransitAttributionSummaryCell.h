@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorTableViewCell {
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *attributionSummary;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateConstraintValues;
- (id)_moreString;

@end
