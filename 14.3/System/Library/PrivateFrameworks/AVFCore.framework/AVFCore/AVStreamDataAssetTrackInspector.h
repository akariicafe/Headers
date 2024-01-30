@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {
    AVWeakReference *_weakReferenceToAsset;
    int _trackID;
}

- (int)trackID;
- (id)mediaType;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (void)dealloc;
- (id)mediaCharacteristics;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (unsigned int)figMediaType;
- (BOOL)isEnabled;
- (id)formatDescriptions;

@end
