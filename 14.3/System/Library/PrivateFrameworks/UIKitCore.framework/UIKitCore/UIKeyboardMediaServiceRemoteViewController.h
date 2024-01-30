@class NSString;
@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol>

@property (weak, nonatomic) id<UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestInlineViewControllerWithConnectionHandler:(id /* block */)a0;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)dismissCard;
- (void).cxx_destruct;
- (void)draggedStickerToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)presentCard;
- (void)stageStickerWithFileHandle:(id)a0 url:(id)a1 accessibilityLabel:(id)a2;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)pasteImageAtFileHandle:(id)a0;
- (void)requestInsertionPointCompletion:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;

@end
