@class HMFTimer, HMFOSTransaction, MLModel, NSURL, NSString;

@interface HMIMLModel : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSURL *modelURL;
@property (retain) MLModel *model;
@property (readonly) HMFTimer *watchdogTimer;
@property (retain) HMFOSTransaction *transaction;
@property (readonly) MLModel *underlyingModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithModelURL:(id)a0;
- (BOOL)_ensureModelWithError:(id *)a0;

@end
