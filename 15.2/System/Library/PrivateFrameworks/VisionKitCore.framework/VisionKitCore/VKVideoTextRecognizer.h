@class VNTrackHomographyRequest, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, VKVideoTextRecognizerDelegate;

@interface VKVideoTextRecognizer : NSObject {
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    NSObject<OS_dispatch_queue> *_homographyQueue;
    unsigned long long q_dataType;
    BOOL q_singleItemOnly;
    unsigned long long q_blockType;
    struct CGSize { double width; double height; } _dimensions;
    BOOL q_delegateWantsStability;
    BOOL q_paused;
    BOOL q_resetRequested;
    BOOL q_hasOutstandingRecognitionRequest;
    BOOL q_hasOutstandingHomographyRequest;
    BOOL q_usesAlternateLineGrouping;
    unsigned long long q_stabilityState;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } q_regionOfInterest;
    struct CGPoint { double x; double y; } q_comparisonPoint;
    NSArray *q_recognitionLanguages;
    double q_lastRecognition;
    double q_stabilityChangedStartMarker;
    double q_stabilityInitializationStartMarker;
    double q_stabilityInitializationThreshold;
    double q_stabilityGainedThreshold;
    double q_stabilityLostThreshold;
    double q_recognitionInterval;
    VNTrackHomographyRequest *q_homographyRequest;
    struct { void /* unknown type, empty encoding */ columns[3]; } q_warpTransformSinceLastRecognition;
}

@property (weak, nonatomic) id<VKVideoTextRecognizerDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *recognizedItems;
@property (readonly, nonatomic) BOOL paused;
@property (nonatomic) double stabilityInitializationThreshold;
@property (nonatomic) double stabilityGainedThreshold;
@property (nonatomic) double stabilityLostThreshold;
@property (readonly, nonatomic) unsigned long long stabilityState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (nonatomic) struct CGPoint { double x; double y; } comparisonPoint;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) BOOL allowsFallbackWhenUsingDataTypes;
@property (copy, nonatomic) NSArray *recognitionLanguages;

- (void)pauseWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)resumeWithCompletion:(id /* block */)a0;
- (id)initUsingSingleItemRecognition:(BOOL)a0 singleLine:(BOOL)a1 dataType:(unsigned long long)a2;
- (void)updateFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)q_updateStabilityFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)q_performReset;
- (void)q_recognizeTextFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)q_trackTextFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)q_updateStabilityState:(unsigned long long)a0;
- (void)updateSingleItemFromRecognitionResults:(id)a0 blockType:(unsigned long long)a1 transform:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)updateSingleItemFromRecognitionResults:(id)a0 dataType:(unsigned long long)a1 blockType:(unsigned long long)a2 transform:(struct { void /* unknown type, empty encoding */ x0[3]; })a3 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (void)updateItemsFromRecognitionResults:(id)a0 blockType:(unsigned long long)a1 transform:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)q_updateFromHomographyResult:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateItemsTransform;
- (void)delegateVideoTextRecognizer:(id)a0 added:(id)a1 updated:(id)a2 removed:(id)a3 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
- (id)clockwiseLayerPointsFromObservation:(id)a0;
- (id)layerQuadFromObservation:(id)a0;
- (id)lineGeometriesFromTextBlock:(id)a0;
- (void)updateSingleItemFromTextBlockObservation:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 bufferTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithVideoOrientation:(long long)a0 dimensions:(struct CGSize { double x0; double x1; })a1;

@end
