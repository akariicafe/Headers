@interface _UICollectionLayoutAnchor : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    unsigned long long _edges;
    struct CGPoint { double x; double y; } _offset;
    struct CGPoint { double x; double y; } _anchorPoint;
    BOOL _offsetIsUnitOffset;
}

@property (readonly, nonatomic) unsigned long long edges;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } offset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;

+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 unitOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithEdges:(unsigned long long)a0 offset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithEdges:(unsigned long long)a0 unitOffset:(struct CGPoint { double x0; double x1; })a1;
+ (id)layoutAnchorWithEdges:(unsigned long long)a0;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_apiRepresentation;
- (id)initWithEdges:(unsigned long long)a0 offset:(struct CGPoint { double x0; double x1; })a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2 offsetIsUnitOffset:(BOOL)a3;

@end
