@class NSString, UIDictationView, UIKBRenderConfig;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory>

@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (nonatomic) UIDictationView *dictationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)layoutSubviews;
- (id)backgroundColorForCurrentRenderConfig;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFillFrame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startColorTransitionOut;
- (void)dealloc;
- (void)startColorTransitionIn;

@end
