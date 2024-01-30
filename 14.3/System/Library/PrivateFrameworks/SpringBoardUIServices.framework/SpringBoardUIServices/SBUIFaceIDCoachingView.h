@class NSString, UIMorphingLabel, _UILegibilitySettings;

@interface SBUIFaceIDCoachingView : UIView

@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic, getter=_label) UIMorphingLabel *label;
@property (nonatomic) unsigned long long coachingCondition;
@property (retain, nonatomic) NSString *currentSizeCategory;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) double stringWidth;

- (id)init;
- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged;
- (void)_resizeLabelToFirstSizeCategoryThatFits;
- (void)_updateLabelTextForCurrentCoachingConditionAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)setCoachingCondition:(unsigned long long)a0 animated:(BOOL)a1 delay:(double)a2;

@end
