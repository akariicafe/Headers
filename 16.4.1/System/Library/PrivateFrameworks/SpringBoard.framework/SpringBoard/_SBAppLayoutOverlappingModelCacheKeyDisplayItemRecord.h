@interface _SBAppLayoutOverlappingModelCacheKeyDisplayItemRecord : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) struct SBDisplayItemAttributedSize { struct CGSize { double width; double height; } normalizedSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceBounds; long long semanticSizeType; } size;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) long long sizingPolicy;
@property (readonly, nonatomic) long long occlusionState;
@property (readonly, nonatomic) long long contentOrientation;

+ (id)itemRecordForLayoutAttributes:(id)a0 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void)_appendToDescriptionBuilder:(id)a0;
- (void)_appendToHashBuilder:(id)a0;
- (id)_initWithRecordForLayoutAttributes:(id)a0 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
