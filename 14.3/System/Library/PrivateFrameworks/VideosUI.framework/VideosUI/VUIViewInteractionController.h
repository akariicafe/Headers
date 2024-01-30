@class UIContextMenuInteraction, IKViewElement, NSString, UIView, UIViewController;

@interface VUIViewInteractionController : NSObject <UIContextMenuInteractionDelegate_Private, TVPreviewInteractionController>

@property (retain, nonatomic) UIContextMenuInteraction *interaction;
@property (readonly, weak, nonatomic) UIView *presentingView;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) IKViewElement *presentingElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateContextMenuWithMenuItems:(id)a0;
+ (id)getHighlightedView;
+ (void)setContextMenuTemplateInterface:(id)a0;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)_getViewElementWithContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_getPreviewViewControllerWithElement:(id)a0;
- (id)_getViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)collectionView:(id)a0 shouldHandleLongPressForItemAtIndexPath:(id)a1;
- (void)updatePresentingElement:(id)a0;
- (void)dismissInteractionView;
- (id)initWithPresentingViewController:(id)a0 presentingView:(id)a1 presentingElement:(id)a2;

@end
