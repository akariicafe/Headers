@class NSString, FBSceneSnapshot, UIImage, SBSnapshotDataProviderContext, SBFallbackSnapshotDataProvider, IOSurface;

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {
    FBSceneSnapshot *_snapshot;
    double _scaleFactor;
    UIImage *_cachedImage;
    SBFallbackSnapshotDataProvider *_fallbackSnapshotDataProvider;
    IOSurface *_processedSurface;
    BOOL _hasProtectedContent;
}

@property (readonly, retain, nonatomic) SBSnapshotDataProviderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneSnapshot:(id)a0 scaleFactor:(double)a1;
- (id)fallbackSnapshotDataProvider;
- (void).cxx_destruct;
- (void)_invalidateSnapshotData;
- (id)fetchImageForFormat:(long long)a0;
- (id)IOSurfaceForFormat:(long long)a0;
- (BOOL)hasProtectedContent;

@end
