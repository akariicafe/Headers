@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible <NSSecureCoding> {
    UIInputViewSetPlacementInvisibleForFloatingAssistantTransition *_cachedSecondaryPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isFloatingAssistantView;
- (void).cxx_destruct;
- (double)alpha;
- (BOOL)isCompactAssistantView;
- (id)subPlacements;

@end
