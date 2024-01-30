@class NSArray;

@interface PXStoryMultipartPanoramaCropFinder : NSObject {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_possibleRects;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_bestRects;
    long long _rectCapacity;
    long long _axis;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _referenceContentsRect;
}

@property (readonly, nonatomic) NSArray *saliencyAreas;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_enumeratePossibleContentsRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1 usingBlock:(id /* block */)a2;
- (long long)_findBestRectsWithMaximumCount:(long long)a0 aspectRatio:(double)a1;
- (double)_scoreContentsRects:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1;
- (id)bestCropContentsRectsWithAspectRatio:(double)a0 axis:(long long)a1;
- (id)initWithSaliencyAreas:(id)a0;

@end
