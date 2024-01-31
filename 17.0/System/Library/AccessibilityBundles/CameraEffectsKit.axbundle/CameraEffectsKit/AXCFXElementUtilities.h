@interface AXCFXElementUtilities : NSObject

+ (id)sharedInstance;

- (void)_axRemoveEffect:(id)a0;
- (void)_axRotateClockwise:(id)a0;
- (void)_axRotateCounterClockwise:(id)a0;
- (void)_axScaleDown:(id)a0;
- (void)_axScaleUp:(id)a0;
- (id)axElementForJTEffect:(id)a0 vc:(id)a1;

@end
