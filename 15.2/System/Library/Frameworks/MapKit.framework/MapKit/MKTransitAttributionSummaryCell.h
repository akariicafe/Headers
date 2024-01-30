@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorCell {
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *attributionSummary;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)_newStationCardUIEnabled;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)_moreString;
- (void)tintColorDidChange;
- (void)setAttribution:(id)a0;

@end
