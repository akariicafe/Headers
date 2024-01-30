@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorCell {
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *attributionSummary;

- (void)_contentSizeCategoryDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setAttribution:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)_moreString;
- (BOOL)_newStationCardUIEnabled;
- (void)_updateConstraintValues;

@end
