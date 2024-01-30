@class NSString, NSDictionary, AVWeakReference, AVAssetReaderOutputInternal;

@interface AVAssetReaderOutput : NSObject {
    AVAssetReaderOutputInternal *_internal;
}

@property (readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
@property (nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property (readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property (readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
@property (readonly, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL alwaysCopiesSampleData;

+ (void)initialize;
+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)a0 withFormatDescription:(id)a1;

- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (long long)_status;
- (BOOL)maximizePowerEfficiency;
- (id)init;
- (id)_errorForOSStatus:(int)a0;
- (void)_attachToWeakReferenceToAssetReader:(id)a0;
- (BOOL)_prepareForReadingReturningError:(id *)a0;
- (void)_cancelReading;
- (BOOL)supportsRandomAccess;
- (id)currentTimeRanges;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { } *)a0;
- (void)markConfigurationAsFinal;
- (void)setSupportsRandomAccess:(BOOL)a0;
- (void)_markAsFinished;
- (BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id *)a0;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)a0;
- (void)resetForReadingTimeRanges:(id)a0;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderServerConnectionDied;
- (void)dealloc;
- (id)_asset;
- (struct OpaqueFigAssetReader { } *)_figAssetReader;
- (BOOL)_isFinished;

@end
