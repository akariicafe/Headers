@class _PXStoryDisplayAssetsFetchResult;
@protocol PXStoryTimelineStyle;

@interface _PXStoryDisplayAssetsInfo : NSObject {
    _PXStoryDisplayAssetsFetchResult *_displayAssets;
    id<PXStoryTimelineStyle> _timelineStyle;
    long long _capacity;
    long long *_originalPlaybackStyles;
    long long _oneUpPlaybackStyle;
    long long *_nUpPlaybackStyles;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } *assetContentInfos;
@property (readonly, nonatomic) const long long *originalPlaybackStyles;
@property (readonly, nonatomic) const long long *oneUpPlaybackStyles;
@property (readonly, nonatomic) const long long *nUpPlaybackStyles;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)configureWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 resourcesDataSource:(id)a1 timelineStyle:(id)a2 nUpPlaybackStyleMapping:(const long long *)a3;
- (id)displayAssetsWithCount:(long long)a0;

@end
