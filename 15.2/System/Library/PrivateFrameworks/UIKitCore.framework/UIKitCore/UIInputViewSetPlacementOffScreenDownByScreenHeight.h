@interface UIInputViewSetPlacementOffScreenDownByScreenHeight : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;

@end
