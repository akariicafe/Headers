@class _TtC13TranslationUI27VisualTranslationViewBridge, UIView;

@interface LTUIVisualTranslationView : UIView

@property (retain, nonatomic) _TtC13TranslationUI27VisualTranslationViewBridge *translationView;
@property (copy, nonatomic) id /* block */ completion;
@property (weak) UIView *_presentationAnchorView;
@property (weak) UIView *presentationAnchorView;

+ (void)isTranslatable:(id)a0 completion:(id /* block */)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)constrainToSuperview:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swiftUIRectFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)describeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dismiss;
- (void)setZoomScale:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)translate:(id)a0 completion:(id /* block */)a1;
- (void)didMoveToSuperview;
- (void)registerForDismissEvent:(id /* block */)a0;
- (void)translate:(id)a0 sourceLocale:(id)a1 targetLocale:(id)a2 completion:(id /* block */)a3;
- (void)translate:(id)a0;
- (void)updatePresentationAnchorRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
