@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (int)trackID;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)mediaType;
- (id)formatDescriptions;
- (BOOL)isEnabled;
- (id)asset;
- (unsigned int)_figMediaType;
- (BOOL)isEqual:(id)a0;
- (float)estimatedDataRate;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (float)peakDataRate;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
