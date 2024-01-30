@class NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusStopwatchComplicationView : NTKZeusComplicationView <NTKStopwatchComplicationDisplay> {
    NTKColoringLabel *_label;
    long long _stopwatchState;
}

@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_createLabel;
- (id)initWithBackgroundView:(id)a0;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })padContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStopwatchState:(long long)a0 elapsedTime:(double)a1 shouldPauseTextCountdown:(BOOL)a2 timeTravelDate:(id)a3;

@end
