@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (double)alpha;
- (BOOL)isFloatingAssistantView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isCompactAssistantView;

@end
