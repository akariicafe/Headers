@class UIKBRenderTraits, NSString;

@interface UIKBRenderFactoryLayoutSegment : NSObject {
    int _rectCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rects[10];
    unsigned long long _triangleCorners[10];
    int _edgeCount;
    unsigned long long _edges[10];
    NSString *_cachedKeyNames[10];
}

@property (readonly, nonatomic) UIKBRenderTraits *traits;
@property (nonatomic) int keyStates;
@property (nonatomic) BOOL requireAllMatches;

+ (id)segmentWithTraits:(id)a0;

- (id)initWithTraits:(id)a0;
- (void)addLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asTriangle:(unsigned long long)a1;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withKeyplane:(id)a2;
- (void)dealloc;
- (void)addRelativeLayoutRectFromEdge:(unsigned long long)a0 ofCachedKey:(id)a1;

@end
