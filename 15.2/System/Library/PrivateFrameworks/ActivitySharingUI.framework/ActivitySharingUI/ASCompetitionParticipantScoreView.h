@class UIColor, NSString, ASCompetitionScoreViewConfiguration, UILabel, NSNumber;

@interface ASCompetitionParticipantScoreView : UIView {
    ASCompetitionScoreViewConfiguration *_configuration;
    UILabel *_nameLabel;
    UILabel *_primaryScoreLabel;
    UILabel *_secondaryScoreLabel;
    NSNumber *_previousLayoutWidth;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) double nameFontSizeReduction;
@property (nonatomic) unsigned long long primaryScore;
@property (nonatomic) double primaryScoreFontSizeReduction;
@property (nonatomic) unsigned long long secondaryScore;
@property (retain, nonatomic) UIColor *scoreColor;
@property (nonatomic) BOOL secondaryScoreEnabled;
@property (nonatomic) double scoreLeftMargin;
@property (nonatomic) double scoreRightMargin;
@property (readonly, nonatomic) double nameBaselineY;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0;
- (void)_updateNameLabelWithFontSizeReduction:(double)a0;
- (void)_updatePrimaryScoreLabelWithFontSizeReduction:(double)a0;
- (void)_updateSecondaryScoreLabel;
- (double)_availableScoreWidthForWidth:(double)a0;
- (double)_computeFontSizeReductionForLabel:(id)a0 width:(double)a1 maxReduction:(double)a2 updateBlock:(id /* block */)a3;
- (double)computePrimaryScoreFontSizeReductionForWidth:(double)a0;
- (double)computeNameFontSizeReductionForWidth:(double)a0;

@end
