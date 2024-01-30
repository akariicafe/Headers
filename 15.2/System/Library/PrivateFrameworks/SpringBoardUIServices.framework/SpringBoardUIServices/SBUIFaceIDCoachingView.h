@class NSString, UIMorphingLabel, _UILegibilitySettings;

@interface SBUIFaceIDCoachingView : UIView

@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic, getter=_label) UIMorphingLabel *label;
@property (nonatomic) unsigned long long coachingCondition;
@property (retain, nonatomic) NSString *currentSizeCategory;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) double stringWidth;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)_contentSizeCategoryChanged;
- (void)setCoachingCondition:(unsigned long long)a0 animated:(BOOL)a1 delay:(double)a2;
- (void)_resizeLabelToFirstSizeCategoryThatFits;
- (void)_updateLabelTextForCurrentCoachingConditionAnimated:(BOOL)a0;

@end
