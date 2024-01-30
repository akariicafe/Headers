@class TFMultiDelegate, NSMutableDictionary, SXViewport, NSMutableSet, NSString;
@protocol SXDocumentSectionHosting;

@interface SXDocumentSectionManager : NSObject <SXViewportChangeListener, SXDocumentSectionManager>

@property (readonly, weak, nonatomic) id<SXDocumentSectionHosting> hosting;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) NSMutableDictionary *blueprints;
@property (readonly, nonatomic) NSMutableSet *visibleViewControllers;
@property (readonly, nonatomic) TFMultiDelegate *multiScrollDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)view;
- (id)viewController;
- (void).cxx_destruct;
- (void)endImpressions;
- (void)applySectionBlueprint:(id)a0 identifier:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (double)heightForBlueprint:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 traitCollection:(id)a2;
- (id)initWithSectionHosting:(id)a0 viewport:(id)a1 appStateMonitor:(id)a2;
- (void)performDisappearanceTransitionForVisibleViewControllers;
- (void)updateViewControllerVisibility;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)viewport:(id)a0 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 documentSizeDidChangeFromSize:(struct CGSize { double x0; double x1; })a1;

@end
