@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementOffScreenLeftOrRight : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement *_otherPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;


- (void)setOtherPlacement:(id)a0;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (void).cxx_destruct;

@end
