@class NSString, FBSceneSnapshot, UIImage, SBSnapshotDataProviderContext, IOSurface;

@interface SBFallbackSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {
    FBSceneSnapshot *_snapshot;
    double _scaleFactor;
    UIImage *_cachedImage;
    IOSurface *_processedSurface;
}

@property (readonly, retain, nonatomic) SBSnapshotDataProviderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateSnapshotData;
- (id)IOSurfaceForFormat:(long long)a0;
- (id)initWithSceneSnapshot:(id)a0 scaleFactor:(double)a1;
- (id)fetchImageForFormat:(long long)a0;
- (void).cxx_destruct;

@end
