@class NSString;

@interface _PXStoryConcreteClipComposition : NSObject <PXStoryClipComposition> {
    unsigned int _edges[2];
    double _splitRatios[2];
    long long _dividerAxes[2];
    long long _clipAssetIndexes[3];
}

@property (readonly, nonatomic) double primarySplitRatio;
@property (readonly, nonatomic) long long numberOfClips;
@property (readonly, nonatomic) BOOL clipFramesExtendToBounds;
@property (readonly, nonatomic) long long mainDividerAxis;
@property (readonly, nonatomic) const long long *dividerAxes;
@property (readonly, nonatomic) double mainDividerSplitRatio;
@property (readonly, nonatomic) const long long *clipAssetIndexes;
@property (readonly, nonatomic) long long numberOfAssets;
@property (readonly, nonatomic) NSString *label;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)getClipFrames:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forContext:(const struct { struct CGSize { double x0; double x1; } x0; double x1; double x2; } *)a1;
- (id)initWithOneUp;
- (id)initWithTwoUpEdge:(unsigned int)a0 splitRatio:(double)a1 label:(id)a2;
- (id)initWithSingleAssetSplitAxis:(long long)a0 splitRatio:(double)a1 label:(id)a2;
- (id)initWithNumberOfClips:(long long)a0 primaryEdge:(unsigned int)a1 splitRatio:(double)a2 secondaryEdge:(unsigned int)a3 splitRatio:(double)a4 label:(id)a5;

@end
