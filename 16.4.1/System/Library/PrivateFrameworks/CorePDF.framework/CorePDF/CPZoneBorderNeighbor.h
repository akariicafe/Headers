@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {
    CPShape *neighborShape;
    int shapeSide;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)initSuper;
- (id)neighborShape;
- (void)setNeighborShape:(id)a0;
- (void)setShapeSide:(int)a0;
- (int)shapeSide;

@end
