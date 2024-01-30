@class UIView, NSString, NSArray, UICalendarView, UIPointerInteraction, UILabel;

@interface _UICalendarDateViewCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    UIPointerInteraction *_pointerInteraction;
    struct { unsigned char overhangMonth : 1; unsigned char outOfRange : 1; unsigned char isToday : 1; unsigned char highlightsToday : 1; unsigned char wantsRoundedSquare : 1; } _flags;
    NSString *_fontDesign;
    NSArray *_decorations;
    UILabel *_dayLabel;
    UIView *_decorationContentView;
    UIView *_backgroundView;
    UIView *_labelContentView;
}

@property (weak, nonatomic) UICalendarView *calendarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)emphasizedFontForTraitCollection:(id)a0 fontDesign:(id)a1;
+ (id)fontForTraitCollection:(id)a0 fontDesign:(id)a1;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateLabelColor;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateBackgroundView;
- (void).cxx_destruct;
- (void)_updateFontDesign;
- (void)_updateForPreferredContentSizeCategoryChange;
- (void)configureWithDay:(id)a0 formatter:(id)a1 fontDesign:(id)a2 decorations:(id)a3 outOfRange:(BOOL)a4 renderOverhangDays:(BOOL)a5 highlightsToday:(BOOL)a6;

@end
