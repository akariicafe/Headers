@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (id)lyrics;
- (id)availableMetadataFormats;
- (struct CGSize { double x0; double x1; })naturalSize;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (id)trackIDs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isEqual:(id)a0;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (long long)trackCount;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)providesPreciseDurationAndTiming;

@end
