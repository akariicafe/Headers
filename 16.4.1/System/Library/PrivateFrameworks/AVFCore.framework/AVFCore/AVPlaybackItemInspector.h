@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (id)commonMetadata;
- (id)lyrics;
- (long long)trackCount;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)metadataForFormat:(id)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)providesPreciseDurationAndTiming;
- (id)availableMetadataFormats;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (unsigned long long)hash;
- (id)trackIDs;

@end
