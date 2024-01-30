@interface TSDHobbyPathGenerator : NSObject {
    BOOL mClosed;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *mPoints;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *mMorphedPoints;
}

- (id)init;
- (void)dealloc;
- (void)calculateClosings;
- (void)adjustNodeTypes:(id)a0;
- (void)adjustStraightenUp:(id)a0;
- (void)adjustRemoveStraightNodes:(id)a0;
- (void)morphPointsTo:(id)a0;
- (void)adjustStraightEdges:(id)a0;
- (void)adjustRatio:(id)a0;
- (void)adjustRotationalSymmetry:(id)a0;
- (double)distanceForSegment:(unsigned long long)a0 overRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 furthestNode:(unsigned long long *)a2 inSubpath:(id)a3;
- (BOOL)pathWillClose:(id)a0;
- (id)hobbyPathFrom:(id)a0 morphedPath:(id *)a1;
- (id)calculateHobbyPath;

@end
