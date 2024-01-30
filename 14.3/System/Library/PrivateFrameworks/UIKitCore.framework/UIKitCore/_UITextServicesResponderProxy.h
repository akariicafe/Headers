@class UIResponder;
@protocol _UITextServicesResponderProxyDelegate;

@interface _UITextServicesResponderProxy : UIResponder

@property (readonly, weak, nonatomic) UIResponder *responder;
@property (weak, nonatomic) id<_UITextServicesResponderProxyDelegate> delegate;

+ (id)_proxyWithResponder:(id)a0;

- (void)_define:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_share:(id)a0;
- (void)_addShortcut:(id)a0;
- (void)_lookup:(id)a0;
- (void).cxx_destruct;
- (id)nextResponder;

@end
