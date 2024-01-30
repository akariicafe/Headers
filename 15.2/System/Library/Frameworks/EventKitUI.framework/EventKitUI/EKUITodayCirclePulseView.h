@class UIFont, NSString, NSDictionary, UIView, TodayCirclePulseBackground, UILabel;

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory> {
    UIView *_backgroundContainer;
    TodayCirclePulseBackground *_background;
    UILabel *_label;
    UILabel *_overlayLabel;
    NSDictionary *_attributes;
    NSDictionary *_overlayAttributes;
}

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSString *overlayString;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *overlayFont;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSDictionary *overlayAttributes;
@property (nonatomic) double circleDiameter;
@property (nonatomic) double textYOffset;
@property (nonatomic) struct CGPoint { double x; double y; } textOffsetFromCircle;
@property (nonatomic) BOOL usesTextYOffsetWithoutAdjustmentForOverlay;
@property (nonatomic) BOOL circleShouldFillFrame;
@property (nonatomic) BOOL dontApplyCenteringOffset;
@property (nonatomic) double textFrameWidthAdjustment;
@property (nonatomic) BOOL usesRoundedRectInsteadOfCircle;
@property (nonatomic) double roundedRectCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)_layoutSubviews;
- (id)_overlayLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pulse:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateLabelAttributedString;
- (void)_updateOverlayLabelAttributedString;

@end
