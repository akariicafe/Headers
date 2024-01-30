@class NSString, UIDimmingView;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {
    UIDimmingView *_dimmingView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dimmingViewWasTapped:(id)a0;
- (void)show;
- (void)dealloc;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (void)endpointButtonPressed;
- (void)setInputViewsHiddenForDictation:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(int)a0;
- (void)returnToKeyboard;

@end
