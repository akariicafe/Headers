@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader { } *formatReader;

- (id)commonMetadata;
- (BOOL)isReadable;
- (id)lyrics;
- (long long)trackCount;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)metadataForFormat:(id)a0;
- (BOOL)isExportable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)_hasQTSaveRestriction;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (long long)fragmentCount;
- (long long)firstFragmentSequenceNumber;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)containsFragments;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)providesPreciseDurationAndTiming;
- (float)preferredRate;
- (id)availableMetadataFormats;
- (void)dealloc;
- (BOOL)canContainFragments;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)preferredVolume;
- (id)alternateTrackGroups;
- (BOOL)isComposable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (float)preferredSoundCheckVolumeNormalization;
- (id)trackReferences;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
