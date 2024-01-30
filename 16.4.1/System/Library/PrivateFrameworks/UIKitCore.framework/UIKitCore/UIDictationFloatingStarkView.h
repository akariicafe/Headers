@class NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)show;
- (void)finishReturnToKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (void)dimmingViewWasTapped:(id)a0;
- (void)setState:(int)a0;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (void)endpointButtonPressed;
- (void)prepareForReturnToKeyboard;
- (void)setInputViewsHiddenForDictation:(BOOL)a0;

@end
