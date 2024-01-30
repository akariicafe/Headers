@class UIView;
@protocol _UIPreviewInteractionImpl, UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@interface UIPreviewInteraction : NSObject {
    id<_UIPreviewInteractionImpl> _interactionImpl;
}

@property (retain, nonatomic) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (readonly, weak, nonatomic) UIView *view;
@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithView:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initClickBasedImplementationWithView:(id)a0;

@end
