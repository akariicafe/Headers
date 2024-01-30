@class ARFaceTrackingManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARFaceTrackingManager *_faceTrackingManger;
    NSObject<OS_dispatch_queue> *_processDataQueue;
}

@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces;

+ (BOOL)isSupported;

- (id)processData:(id)a0;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)captureBehavior;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)a0 options:(id)a1;
- (void)_enqueueImageForFaceTrackingNonBlocking:(id)a0;

@end
