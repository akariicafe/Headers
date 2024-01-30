@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader { } *formatReader;

- (id)lyrics;
- (long long)fragmentCount;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)trackReferences;
- (long long)trackCount;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)isExportable;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)isReadable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)canContainFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (float)preferredRate;
- (id)metadataForFormat:(id)a0;
- (BOOL)isComposable;
- (id)availableMetadataFormats;
- (id)alternateTrackGroups;
- (id)commonMetadata;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (float)preferredSoundCheckVolumeNormalization;
- (long long)firstFragmentSequenceNumber;
- (BOOL)_hasQTSaveRestriction;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (int)naturalTimeScale;
- (BOOL)containsFragments;

@end
