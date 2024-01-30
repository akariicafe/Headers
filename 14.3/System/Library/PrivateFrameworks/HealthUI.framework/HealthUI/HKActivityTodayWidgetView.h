@class UIFont, HKUnit, UIView, UIImageView, HKActivityRingView, NSMutableArray, UILayoutGuide, UILabel, HKActivitySummary;

@interface HKActivityTodayWidgetView : UIView {
    HKActivityRingView *_ringView;
    HKActivitySummary *_activitySummary;
    HKUnit *_activeEnergyUnit;
    HKUnit *_basalEnergyUnit;
    UIImageView *_ringViewSnapshot;
    UILabel *_moveTitleLabel;
    UILabel *_moveValueLabel;
    UILabel *_exerciseTitleLabel;
    UILabel *_exerciseValueLabel;
    UILabel *_standTitleLabel;
    UILabel *_standValueLabel;
    UIFont *_smallCapsValueFont;
    UIView *_textContainerView;
    UILayoutGuide *_labelsTopLayoutGuide;
    UILayoutGuide *_labelsBottomLayoutGuide;
}

@property (retain, nonatomic) NSMutableArray *sizeDepedentConstraints;

+ (double)preferredHeight;
+ (id)_integerFormatter;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setupSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_textSizeDidUpdate:(id)a0;
- (void)setupRingViews;
- (void)setupMoveLabelsWithTitleFont:(id)a0 valueFont:(id)a1;
- (void)setupExerciseLabelsWithTitleFont:(id)a0 valueFont:(id)a1;
- (void)setupStandLabelsWithTitleFont:(id)a0 valueFont:(id)a1;
- (void)updateTextWithNewActivitySummary:(id)a0;
- (void)_constrainLabels;
- (void)_animateCurrentActivitySummary;
- (void)setActivitySummary:(id)a0 animated:(BOOL)a1;
- (void)_updateStandTitleLabelWithSummary:(id)a0;
- (void)_updateMoveValueLabelWithSummary:(id)a0;
- (void)_updateForCurrentSizeCategoryAndSystemLanguage;
- (void)_renderRingImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activeEnergyUnit:(id)a1 basalEnergyUnit:(id)a2;
- (void)setActiveEnergyUnit:(id)a0 basalEnergyUnit:(id)a1;
- (void)setIsWheelchairUser:(BOOL)a0;

@end
