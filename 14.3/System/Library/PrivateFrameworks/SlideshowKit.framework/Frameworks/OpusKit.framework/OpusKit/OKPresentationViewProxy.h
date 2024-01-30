@class NSString, OKPresentationViewAllGestureRecognizer;

@interface OKPresentationViewProxy : OFUIView <UIGestureRecognizerDelegate> {
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)presentationViewController;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleAllGesture:(id)a0;

@end
