@class UIView, NSString, SXViewport;
@protocol SXGradientFactory;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer>

@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXGradientFactory> gradientFactory;
@property (retain, nonatomic) UIView *topBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applyBackgroundColorForStyle:(id)a0 onView:(id)a1;
- (void)applyStyle:(id)a0 onView:(id)a1;
- (void)applyTopBackgroundForStyle:(id)a0 onView:(id)a1;
- (id)initWithViewport:(id)a0 gradientFactory:(id)a1;
- (void)layoutTopBackgroundView;
- (void)viewport:(id)a0 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
