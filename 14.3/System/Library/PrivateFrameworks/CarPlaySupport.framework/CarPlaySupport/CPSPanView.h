@class NSString, CPSPanButton;
@protocol CPSPanViewDelegate;

@interface CPSPanView : CPUIPassthroughView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) CPSPanButton *panLeftButton;
@property (readonly, nonatomic) CPSPanButton *panRightButton;
@property (readonly, nonatomic) CPSPanButton *panUpButton;
@property (readonly, nonatomic) CPSPanButton *panDownButton;
@property (weak, nonatomic) id<CPSPanViewDelegate> delegate;
@property (readonly, nonatomic) double sideButtonTopInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_handleLongPressGesture:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleButtonTapped:(id)a0;

@end
