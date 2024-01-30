@class UIColor, NSString, CLKImageProvider, UIImageView;

@interface NTKWorkoutComplicationAnimatedWrapperView : UIView <NTKComplicationImageView> {
    UIImageView *_imageView;
}

@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateState;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAnimationImages:(id)a0;
- (void)_updateTint;
- (void)_applyAnimationForPauseState:(BOOL)a0 animated:(BOOL)a1;

@end
