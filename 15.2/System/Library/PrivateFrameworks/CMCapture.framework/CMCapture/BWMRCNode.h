@class NSArray, NSDictionary;
@protocol BWMetadataDetectedResultsObserver;

@interface BWMRCNode : BWNode {
    void /* function */ *_createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSArray *_symbologiesArray;
    NSArray *_mrcIdentifiers;
    long long _lastDetectedMRCCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectOfInterest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rectOfInterestLock;
    BOOL _hasPendingRectOfInterestUpdate;
    BOOL _lowPowerModeEnabled;
    NSDictionary *_metadataIdentifierToSymbologyDictionary;
}

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)setLowPowerModeEnabled:(BOOL)a0;
- (void)_updateInputRequirements;
- (id)nodeSubType;
- (int)_setupSampleBufferProcessor;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)_teardownSampleBufferProcessor;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)_pixelFormatsSupportedByBarcodeScanner;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldEmitSBufForBarcodeCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)mrcIdentifiers;
- (id)init;
- (BOOL)lowPowerModeEnabled;
- (id)_newSymbologiesArrayFromIdentifiers:(id)a0;
- (void)setMrcIdentifiers:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterest;

@end
