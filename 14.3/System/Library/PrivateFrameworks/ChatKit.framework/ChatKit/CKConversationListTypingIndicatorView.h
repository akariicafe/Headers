@class IMConversationListTypingIndicatorLayer;

@interface CKConversationListTypingIndicatorView : UIView

@property (retain, nonatomic) IMConversationListTypingIndicatorLayer *typingLayer;
@property (nonatomic) BOOL isDarkAqua;
@property (nonatomic) double typingIndicatorScale;
@property (nonatomic, getter=isHighlighted) BOOL highlightedState;
@property (nonatomic) BOOL flipForRTLLayout;

- (id)init;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startPulseAnimation;
- (void)_updateTypingLayerTransform;
- (void)destroyTypingLayer;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)a0;
- (void)resetTypingLayer;
- (void)startGrowAnimation;

@end
