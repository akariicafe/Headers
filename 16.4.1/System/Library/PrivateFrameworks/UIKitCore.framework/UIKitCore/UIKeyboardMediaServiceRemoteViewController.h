@class NSString;
@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol>

@property (nonatomic, getter=_isShownInline, setter=_setShownInline:) BOOL _shownInline;
@property (weak, nonatomic) id<UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)requestInlineViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)serviceViewControllerInterface;

- (void)requestInsertionPointCompletion:(id /* block */)a0;
- (void)presentCard;
- (BOOL)_canShowWhileLocked;
- (void)dismissCard;
- (void)pasteImageAtFileHandle:(id)a0;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)stageStickerWithFileHandle:(id)a0 url:(id)a1 accessibilityLabel:(id)a2;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)__shouldRemoteViewControllerFenceGeometryChange:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;

@end
