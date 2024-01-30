@class MLModel, NSString, NSArray, AccelerometerBuffer, MLMultiArray, AXPhoenixDataLogger, NSObject, PredictionsBuffer, AXPhoenixClassifierConfiguration;
@protocol OS_dispatch_queue, AXPhoenixClassifierDelegate;

@interface AXPhoenixClassifier : NSObject {
    id<AXPhoenixClassifierDelegate> _delegate;
    AXPhoenixClassifierConfiguration *_configuration;
    MLModel *_classifier;
    AccelerometerBuffer *_accelBuffer;
    PredictionsBuffer *_predictionsBuffer;
    unsigned long long _sampleCountSinceLastTrigger;
    int _policyOption;
    MLMultiArray *_multiArray;
    unsigned long long _frameLength;
    NSArray *_shape;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_modelVersion;
    NSString *_modelDescription;
    NSString *_modelInputName;
    NSString *_modelOutputName;
    unsigned long long _loopCounter;
    double *_arrayDataPointer;
    unsigned long long _runFrequency;
    unsigned long long _minSamplesBetweenTriggers;
    BOOL _shouldResetBuffer;
    float _tapSpeed;
    AXPhoenixDataLogger *_logger;
}

@property (nonatomic) BOOL falsePositiveLoggingEnabled;

- (id)version;
- (id)configuration;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)setTapSpeed:(float)a0;
- (BOOL)_clippedDataShowsPrediction:(unsigned long long)a0;
- (id)_clippedMultiArrayInputWithError:(id *)a0 beforeTime:(double)a1;
- (unsigned long long)_computeFrameLength;
- (unsigned long long)_countThresholdForGesturePrediction:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (id)_createMultiArrayWithError:(id *)a0;
- (void)_handleAccelerometerData:(struct { double x0; double x1; double x2; })a0 withTimestamp:(double)a1;
- (id)_initializeModelFromURL:(id)a0 outError:(id *)a1;
- (void)_logWindowData:(id)a0 doubleTap:(BOOL)a1 tapData:(struct { double x0; double x1; double x2; double x3; })a2;
- (id)_multiArrayInputForClassifierWithError:(id *)a0;
- (id)_windowData:(BOOL)a0;
- (void)handleAccelerometerData:(struct { double x0; double x1; double x2; })a0 withTimestamp:(double)a1;
- (id)initWithDelegate:(id)a0 modelURL:(id)a1 configuration:(id)a2;
- (void)setPolicyOption:(int)a0;
- (void)setShouldResetBuffer;

@end
