@class NSString, UIPointerInteraction;

@interface _UIDatePickerCalendarDayCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    UIPointerInteraction *_pointerInteraction;
    struct { unsigned char overhangMonth : 1; unsigned char outOfRange : 1; unsigned char isToday : 1; } _flags;
    NSString *_text;
    NSString *_fontDesign;
    struct CGSize { double width; double height; } _lastKnownSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontForTraitCollection:(id)a0 fontDesign:(id)a1;
+ (id)emphasizedFontForTraitCollection:(id)a0 fontDesign:(id)a1;
+ (id)reuseIdentifier;

- (void)configureWithDay:(id)a0 formatter:(id)a1 fontDesign:(id)a2 outOfRange:(BOOL)a3 renderOverhangDays:(BOOL)a4;
- (void)tintColorDidChange;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)configurationState;
- (BOOL)_wantsRoundedSquare;
- (void)updateConfigurationUsingState:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
