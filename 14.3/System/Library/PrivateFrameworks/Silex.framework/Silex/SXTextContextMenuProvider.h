@class NSString, SXTangierController;
@protocol SXActionManager;

@interface SXTextContextMenuProvider : NSObject <SXContextMenuProviding>

@property (readonly, nonatomic) SXTangierController *tangierController;
@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitPreviewViewController:(id)a0;
- (void).cxx_destruct;
- (void)repAndHyperlinkAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1 block:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportRectForLinkInRep:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 viewport:(id)a2;
- (id)contextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (id)targetedPreviewAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (id)initWithTangierController:(id)a0 actionManager:(id)a1;

@end
