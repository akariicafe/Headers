@interface NewsArticles.CompositeTrackPlayerItem : AVPlayerItem {
    void /* unknown type, empty encoding */ boundaryOverride;
}

@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;

- (BOOL)seekToDate:(id)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithAsset:(id)a0 automaticallyLoadedAssetKeys:(id)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;

@end
