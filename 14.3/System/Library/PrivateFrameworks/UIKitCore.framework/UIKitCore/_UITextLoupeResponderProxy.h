@class UIResponder;
@protocol _UITextLoupeResponderProxyDelegate;

@interface _UITextLoupeResponderProxy : UIResponder

@property (readonly, weak, nonatomic) UIResponder *responder;
@property (weak, nonatomic) id<_UITextLoupeResponderProxyDelegate> delegate;

+ (id)_proxyWithResponder:(id)a0;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (id)nextResponder;
- (void)selectToHere:(id)a0;

@end
