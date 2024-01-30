@protocol NTKRichComplicationRectangularBaseViewDelegate;

@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView

@property (weak, nonatomic) id<NTKRichComplicationRectangularBaseViewDelegate> delegate;

+ (id)viewWithLegacyComplicationType:(unsigned long long)a0;
+ (void)updateCustomDataAnimationFromEarlierView:(id)a0 laterView:(id)a1 isForward:(BOOL)a2 animationType:(unsigned long long)a3 animationDuration:(double)a4 animationFraction:(float)a5;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (id)_createAndAddColoringLabelWithFontSize:(double)a0 weight:(double)a1 usesTextProviderTintColoring:(BOOL)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;

@end
