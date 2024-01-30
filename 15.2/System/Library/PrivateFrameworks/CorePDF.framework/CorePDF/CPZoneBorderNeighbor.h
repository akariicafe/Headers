@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {
    CPShape *neighborShape;
    int shapeSide;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initSuper;
- (id)neighborShape;
- (int)shapeSide;
- (void)setNeighborShape:(id)a0;
- (void)setShapeSide:(int)a0;

@end
