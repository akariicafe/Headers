@class NSArray, NSDictionary;
@protocol BWMRCDetectedResultsObserver;

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

@property (nonatomic) id<BWMRCDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setLowPowerModeEnabled:(BOOL)a0;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)mrcIdentifiers;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_teardownSampleBufferProcessor;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateInputRequirements;
- (BOOL)_shouldEmitSBufForBarcodeCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_newSymbologiesArrayFromIdentifiers:(id)a0;
- (BOOL)lowPowerModeEnabled;
- (id)_pixelFormatsSupportedByBarcodeScanner;
- (void)setMrcIdentifiers:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterest;
- (int)_setupSampleBufferProcessor;

@end
