@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem { } *playbackItem;

- (id)lyrics;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (long long)trackCount;
- (BOOL)providesPreciseDurationAndTiming;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (id)metadataForFormat:(id)a0;
- (id)availableMetadataFormats;
- (id)trackIDs;
- (id)commonMetadata;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 trackIDs:(id)a1;
- (unsigned long long)hash;
- (void)dealloc;

@end
