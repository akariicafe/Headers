@class UIResponder;
@protocol _UITextLoupeResponderProxyDelegate;

@interface _UITextLoupeResponderProxy : UIResponder

@property (readonly, weak, nonatomic) UIResponder *responder;
@property (weak, nonatomic) id<_UITextLoupeResponderProxyDelegate> delegate;

+ (id)_proxyWithResponder:(id)a0;

- (id)nextResponder;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
