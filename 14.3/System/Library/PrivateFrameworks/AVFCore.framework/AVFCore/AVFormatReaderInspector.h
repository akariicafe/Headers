@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader { } *formatReader;

- (float)preferredVolume;
- (id)lyrics;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (float)preferredSoundCheckVolumeNormalization;
- (void)dealloc;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (BOOL)isReadable;
- (long long)fragmentCount;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (id)alternateTrackGroups;
- (long long)firstFragmentSequenceNumber;
- (unsigned long long)hash;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isComposable;
- (float)preferredRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExportable;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (long long)trackCount;
- (BOOL)containsFragments;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)providesPreciseDurationAndTiming;
- (id)trackReferences;

@end
