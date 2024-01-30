@class NSUUID, NSString, VNRequestSpecifier;

@interface VNTracker : NSObject <VNOriginatingRequestSpecifierProviding> {
    struct shared_ptr<vision::mod::ObjectTrackerAbstract> { struct ObjectTrackerAbstract *__ptr_; struct __shared_weak_count *__cntrl_; } mTrackerImpl;
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) Class trackerObservationClass;

@property (readonly) BOOL isTracking;
@property (readonly) BOOL isResettable;
@property long long trackedFrameNumber;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastTrackedBBox;
@property (readonly) NSUUID *key;
@property (readonly) NSString *level;
@property unsigned int trackedFrameCVPixelBufferFormat;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

+ (long long)VNTrackerOptionToTrackerType:(id)a0;

- (BOOL)reset:(id *)a0;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)setTrackedObjects:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (id)trackInFrame:(id)a0 error:(id *)a1;
- (id)_parseInputObservations:(id)a0 imageBuffer:(id)a1 error:(id *)a2;
- (void *)_createTrackerWithLevel:(id)a0 options:(struct ObjectTrackerOptions { void /* function */ **x0; id x1; int x2; } *)a1 error:(id *)a2;
- (id)_postProcessTrackingResults:(id)a0 trackerResults:(id)a1 error:(id *)a2;
- (BOOL)_visionBBoxToTrackerBBox:(id)a0 trackedObjects:(void *)a1 imageSize:(struct CGSize { double x0; double x1; })a2 results:(id)a3 error:(id *)a4;
- (BOOL)_updateTrackerWithModifiedBBoxForImageBuffer:(id)a0 error:(id *)a1;

@end
