@class NSString;

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataSource:(id)a0;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout:(BOOL)a0;
- (void)layout;
- (void)dataSourceUpdated:(id)a0;
- (void)viewWillMoveToHostWindow:(id)a0;
- (void)viewDidMoveToHostWindow;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0 allowShadowContent:(BOOL)a1;

@end
