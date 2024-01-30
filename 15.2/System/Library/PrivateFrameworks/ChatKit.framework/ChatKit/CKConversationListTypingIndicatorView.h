@class IMConversationListTypingIndicatorLayer;

@interface CKConversationListTypingIndicatorView : UIView

@property (retain, nonatomic) IMConversationListTypingIndicatorLayer *typingLayer;
@property (nonatomic) BOOL isDarkAqua;
@property (nonatomic) double typingIndicatorScale;
@property (nonatomic, getter=isHighlighted) BOOL highlightedState;
@property (nonatomic) BOOL flipForRTLLayout;

- (void)startPulseAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)_updateTypingLayerTransform;
- (void)destroyTypingLayer;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)a0;
- (void)resetTypingLayer;
- (void)startGrowAnimation;
- (void)stopAnimation;

@end
