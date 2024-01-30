@class UIFont, NSString, SBUILegibilityLabel, NSDate, _UILegibilitySettings;

@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility>

@property (retain, nonatomic) SBUILegibilityLabel *label;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } characterOverflowInsets;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_lunarCalendarIdentifier;
+ (BOOL)showAlternateDate;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)_alternateDateString;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 strength:(double)a1 font:(id)a2;

@end
