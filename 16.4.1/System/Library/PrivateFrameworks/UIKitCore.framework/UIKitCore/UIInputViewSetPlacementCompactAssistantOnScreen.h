@interface UIInputViewSetPlacementCompactAssistantOnScreen : UIInputViewSetPlacementAssistantOnScreen

@property (nonatomic) struct CGPoint { double x; double y; } offset;

+ (BOOL)supportsSecureCoding;

- (id)applicatorInfoForOwner:(id)a0;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (BOOL)isCompactAssistantView;
- (double)verticalOffset;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;

@end
