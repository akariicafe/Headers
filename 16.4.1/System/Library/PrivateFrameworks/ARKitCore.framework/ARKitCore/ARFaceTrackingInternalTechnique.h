@class ARFaceTrackingManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARFaceTrackingManager *_faceTrackingManger;
    NSObject<OS_dispatch_queue> *_processDataQueue;
}

@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces;

+ (BOOL)isSupported;

- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (id)init;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (long long)captureBehavior;
- (void)_enqueueImageForFaceTrackingNonBlocking:(id)a0;
- (void)_processImageDataInBackgound:(id)a0;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)a0 options:(id)a1;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;

@end
