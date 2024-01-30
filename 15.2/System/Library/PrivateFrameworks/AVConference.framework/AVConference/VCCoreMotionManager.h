@class NSObject, NSOperationQueue, CMMotionActivity, CMMotionActivityManager;
@protocol OS_dispatch_queue, VCCoreMotionManagerDelegate;

@interface VCCoreMotionManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VCCoreMotionManagerDelegate> _coreMotionManagerDelegate;
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
}

@property (readonly) CMMotionActivity *motionActivity;

- (id)initWithDelegate:(id)a0;
- (void)setMotionActivity:(id)a0;
- (void)dealloc;
- (void)setCoreMotionManagerDelegate:(id)a0;
- (void)stopMonitoringMotionActivity;
- (unsigned char)getMotionActivityValueForMotionActivity:(id)a0;
- (id)coreMotionManagerDelegate;
- (void)startMonitoringMotionActivity;

@end
