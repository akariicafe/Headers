@interface SBDisplayItemLayoutAttributes : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) long long contentOrientation;
@property (readonly, nonatomic) long long lastInteractionTime;
@property (readonly, nonatomic) long long sizingPolicy;
@property (readonly, nonatomic) struct SBDisplayItemAttributedSize { struct CGSize { double width; double height; } normalizedSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds; long long semanticSizeType; } attributedSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } normalizedCenter;
@property (readonly, nonatomic) long long occlusionState;
@property (readonly, nonatomic) struct SBDisplayItemAttributedSize { struct CGSize { double width; double height; } normalizedSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds; long long semanticSizeType; } attributedUserSizeBeforeOverlapping;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } unoccludedPeekingCenter;

+ (struct CGSize { double x0; double x1; })normalizedSizeForSize:(struct CGSize { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)layoutAttributesWithProtobufRepresentation:(id)a0;
+ (struct CGPoint { double x0; double x1; })normalizedPointForPoint:(struct CGPoint { double x0; double x1; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)plistRepresentation;
- (id)attributesByModifyingAttributedUserSizeBeforeOverlapping:(struct SBDisplayItemAttributedSize { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; long long x2; })a0;
- (id)initWithPlistRepresentation:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)protobufRepresentation;
- (id)attributesByModifyingAttributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; long long x2; })a0;
- (struct CGPoint { double x0; double x1; })centerInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)attributesByModifyingSizingPolicy:(long long)a0;
- (id)attributesByModifyingOcclusionState:(long long)a0;
- (id)initWithContentOrientation:(long long)a0 lastInteractionTime:(long long)a1 sizingPolicy:(long long)a2 attributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; long long x2; })a3 normalizedCenter:(struct CGPoint { double x0; double x1; })a4 occlusionState:(long long)a5 attributedUserSizeBeforeOverlapping:(struct SBDisplayItemAttributedSize { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; long long x2; })a6 unoccludedPeekingCenter:(struct CGPoint { double x0; double x1; })a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributesByModifyingUnoccludedPeekingCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_sizeForAttributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; long long x2; })a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 defaultSize:(struct CGSize { double x0; double x1; })a2 screenEdgePadding:(double)a3;
- (BOOL)isEqual:(id)a0;
- (id)attributesByModifyingContentOrientation:(long long)a0;
- (id)attributesByModifyingNormalizedCenter:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)succinctDescription;
- (id)init;
- (id)initWithContentOrientation:(long long)a0 lastInteractionTime:(long long)a1 sizingPolicy:(long long)a2 attributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; long long x2; })a3 normalizedCenter:(struct CGPoint { double x0; double x1; })a4;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)attributesByModifyingLastInteractionTime:(long long)a0;
- (id)description;
- (struct CGSize { double x0; double x1; })userSizeBeforeOverlappingInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultSize:(struct CGSize { double x0; double x1; })a1 screenEdgePadding:(double)a2;
- (struct CGSize { double x0; double x1; })sizeInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultSize:(struct CGSize { double x0; double x1; })a1 screenEdgePadding:(double)a2;

@end
