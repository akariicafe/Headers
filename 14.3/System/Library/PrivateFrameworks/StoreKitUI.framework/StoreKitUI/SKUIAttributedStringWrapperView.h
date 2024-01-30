@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView

@property (readonly, nonatomic) SKUIAttributedStringView *delegateView;

- (void)setLayout:(id)a0;
- (long long)badgePlacement;
- (double)baselineOffset;
- (void).cxx_destruct;
- (void)setBadgePlacement:(long long)a0;
- (void)setTextColor:(id)a0;
- (id)textColor;
- (id)layout;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)firstBaselineOffset;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)textColorFollowsTintColor;
- (void)setTextColorFollowsTintColor:(BOOL)a0;
- (void)setStringTreatment:(long long)a0;
- (void)setTreatmentColor:(id)a0;
- (void)setRequiredBadges:(id)a0;
- (void)viewWasRecycled;
- (BOOL)usesTallCharacterSet;
- (void)setFirstLineTopInset:(long long)a0;
- (id)requiredBadges;
- (long long)stringTreatment;
- (id)treatmentColor;
- (long long)firstLineTopInset;

@end
