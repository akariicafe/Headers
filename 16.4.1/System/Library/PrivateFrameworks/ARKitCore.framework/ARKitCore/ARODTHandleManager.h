@class NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARODTHandleManager : NSObject {
    struct CV3DODTContext { } *_odtHandle;
    NSObject<OS_dispatch_semaphore> *_odtHandleSemaphore;
    unsigned long long _odtCounter;
    NSDictionary *_options;
    struct CV3DMLModel { struct { unsigned int x0; unsigned int x1; unsigned int x2; } x0; struct CV3DMLModelData *x1; } *_mlModel;
    unsigned long long _odtPowerUsage;
}

@property (readonly, nonatomic) long long maximumNumberOfTrackedImages;
@property (readonly, nonatomic) BOOL continuousDetection;
@property (readonly, nonatomic) BOOL deterministicMode;

+ (int)_calibrationDataFromImageData:(id)a0 pCalibrationData:(id *)a1;
+ (void)accumulateReferenceImageErrorsForResult:(int)a0 refImage:(id)a1 objectID:(unsigned long long)a2 pReferenceImageMap:(id *)a3 pFailedReferenceImageNames:(id *)a4 pUserErrorType:(long long *)a5;
+ (long long)actualNumberOfImagesTracked:(long long)a0;
+ (id)handleAccumulatedErrorType:(long long)a0 failedReferenceImageNames:(id)a1;
+ (id)suggestionInternalError;
+ (id)suggestionInvalidFeature;
+ (id)suggestionInvalidImage;
+ (int)verifyReferenceImage:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)addReferenceImage:(id)a0 tracking:(BOOL)a1 pObjectID:(unsigned long long *)a2;
- (int)addReferenceObject:(id)a0 tracking:(BOOL)a1 pObjectID:(unsigned long long *)a2;
- (int)detectReferenceObjectsForImageData:(id)a0 worldTrackingPose:(id)a1 imageContext:(const void *)a2 pResultArray:(id *)a3;
- (id)initWithDeterministicMode:(BOOL)a0;
- (id)initWithMaximumNumberOfTrackedImages:(long long)a0;
- (id)initWithMaximumNumberOfTrackedImages:(long long)a0 continuousDetection:(BOOL)a1 deterministicMode:(BOOL)a2;
- (id)initWithRegionProposalModelAndDeterministicMode:(BOOL)a0;
- (int)predictPlanarObjectsAtTimestamp:(double)a0 worldTrackingPose:(id)a1 timeBudget:(double)a2 pResultArray:(id *)a3;
- (void)releaseODTHandle;
- (int)trackPlanarObjectAndEstimateScaleForImageData:(id)a0 worldTrackingPose:(id)a1 imageContext:(const void *)a2 timeBudget:(double)a3 pResultArray:(id *)a4;
- (int)trackPlanarObjectForImageData:(id)a0 imageContext:(const void *)a1 timeBudget:(double)a2 pResultArray:(id *)a3;
- (void)updatePowerUsage:(unsigned long long)a0;
- (int)waitForAllObjectsAddToFinish;

@end
