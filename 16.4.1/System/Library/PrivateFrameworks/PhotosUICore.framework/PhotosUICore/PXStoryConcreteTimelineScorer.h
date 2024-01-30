@class _PXStoryConcreteScorerDisplayAssetsFetchResult, _PXStoryConcreteScorerDisplayAsset;
@protocol PXStoryTimelineStyle;

@interface PXStoryConcreteTimelineScorer : NSObject <PXStoryTimelineScorer> {
    _PXStoryConcreteScorerDisplayAssetsFetchResult *_segmentDisplayAssets;
    _PXStoryConcreteScorerDisplayAsset *_splitAsset;
    double _videoMaximumAspectFillScale;
    double _livePhotoSameOrientationMaximumScales[2];
    double _livePhotoOppositeOrientationMaximumScales[2];
    double _scoreForAspectFillOneUpWithPoorCrop;
}

@property (readonly, nonatomic) double verySignificantScore;
@property (nonatomic) long long saliencyFallbackBehavior;
@property (readonly, nonatomic) id<PXStoryTimelineStyle> timelineStyle;

- (id)init;
- (void).cxx_destruct;
- (double)_scoreForClipInfo:(const struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; long long x1; float x2; double x3; double x4; double x5; double x6; } x11; } *)a0 inClipFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timelineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 nUpBonus:(double *)a3;
- (double)_scoreForSplitAsset:(id)a0 inTimeline:(id)a1 segmentTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)initWithTimelineStyle:(id)a0;
- (double)scoreForTimeline:(id)a0;

@end
