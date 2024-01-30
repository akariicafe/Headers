@class NSUUID, NSString;

@interface VNTracker : NSObject <VNRequestRevisionProviding> {
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> { struct ObjectTrackerAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } mTrackerImpl;
}

@property (class, readonly) Class trackerObservationClass;

@property (readonly) BOOL isTracking;
@property (readonly) BOOL isResettable;
@property long long trackedFrameNumber;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastTrackedBBox;
@property (readonly) NSUUID *key;
@property (readonly) NSString *level;
@property unsigned int trackedFrameCVPixelBufferFormat;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (long long)VNTrackerOptionToTrackerType:(id)a0;

- (void).cxx_destruct;
- (BOOL)reset:(id *)a0;
- (struct ObjectTrackerAbstract { void /* function */ **x0; struct ObjectDetectorAbstract *x1; struct shared_ptr<vision::mod::ObjectTrackerOptions> { struct ObjectTrackerOptions *x0; struct __shared_weak_count *x1; } x2; } *)_createTrackerWithLevel:(id)a0 options:(struct ObjectTrackerOptions { void /* function */ **x0; id x1; int x2; } *)a1 error:(id *)a2;
- (id)_postProcessTrackingResults:(id)a0 trackerResults:(id)a1 error:(id *)a2;
- (BOOL)_visionBBoxToTrackerBBox:(id)a0 trackedObjects:(struct vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject *x0; struct DetectedObject *x1; struct __compressed_pair<vision::mod::DetectedObject *, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject *x0; } x2; } *)a1 imageSize:(struct CGSize { double x0; double x1; })a2 results:(id)a3 error:(id *)a4;
- (BOOL)_updateTrackerWithModifiedBBoxForImageBuffer:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)_parseInputObservations:(id)a0 imageBuffer:(id)a1 error:(id *)a2;
- (id)setTrackedObjects:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (id)trackInFrame:(id)a0 error:(id *)a1;

@end
