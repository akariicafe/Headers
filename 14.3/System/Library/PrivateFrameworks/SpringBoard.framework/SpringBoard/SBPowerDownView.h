@protocol SBPowerDownViewDelegate;

@interface SBPowerDownView : SBUIPowerDownView

@property (weak, nonatomic) id<SBPowerDownViewDelegate> powerDownDelegate;

- (void)_idleTimerFired;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)a0;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_cancelButtonTapped;

@end
