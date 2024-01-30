@class OUObjectAsset, NSDate, NSArray, OUConfiguration, NSMutableDictionary, OU3DObjectDetector, NSObject, OS_os_workgroup;
@protocol OUSessionDelegate, OUFrame, OS_dispatch_semaphore, OS_dispatch_queue;

@interface OUSession : NSObject {
    OUConfiguration *configuration_;
    OU3DObjectDetector *det3d_;
    NSObject<OS_dispatch_queue> *detQueue_;
    NSObject<OS_dispatch_queue> *ouframeQueue_;
    NSObject<OS_dispatch_semaphore> *detSemaphore_;
    float _minFrameInterval;
    NSDate *_detStartDate;
    NSArray *objects_;
    OUObjectAsset *object_asset_;
    NSArray *offline_objects_;
    NSMutableDictionary *allKeyframes_;
    NSMutableDictionary *skipedKeyframes_;
    id<OUFrame> ouframe_;
    OS_os_workgroup *_workgroupOD;
    OS_os_workgroup *_workgroupFrame;
}

@property (weak, nonatomic) id<OUSessionDelegate> delegate;

- (id)init:(BOOL)a0;
- (void)runWithConfiguration:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)updateWithFrame:(id)a0;
- (void)generateOfflineObjects:(id)a0 onlineObjects:(id)a1 block:(id /* block */)a2;
- (void)updateWithKeyframes:(id)a0 ouframe:(id)a1;
- (void)generateOfflineObjectAsset:(id)a0 onlineObjects:(id)a1 block:(id /* block */)a2;
- (void)generateOfflineObjects:(id)a0 onlineObjects:(id)a1;
- (void)updateWithKeyframes:(id)a0 currentCameraPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
