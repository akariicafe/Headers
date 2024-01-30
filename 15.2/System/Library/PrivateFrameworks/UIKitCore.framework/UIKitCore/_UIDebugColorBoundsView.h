@interface _UIDebugColorBoundsView : UIView

+ (id)_nextColor;

- (id)initWithView:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(BOOL)a0;
- (void)_removeColorViewBoundsOverlay;

@end
