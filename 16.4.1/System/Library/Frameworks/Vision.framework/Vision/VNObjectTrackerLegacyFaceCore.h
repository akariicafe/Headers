@class FaceCoreDetector, NSDictionary;

@interface VNObjectTrackerLegacyFaceCore : VNTracker {
    FaceCoreDetector *_detector;
    NSDictionary *_detectOptions;
    NSDictionary *_extractOptions;
}

+ (id)_convertOptionsToFaceCoreExtractOptions:(id)a0;
+ (Class)trackerObservationClass;
+ (id)_convertOptionsToFaceCoreDetectOptions:(id)a0;
+ (id)_convertOptionsToFaceCoreSetupOptions:(id)a0;

- (BOOL)reset:(id *)a0;
- (void).cxx_destruct;
- (id)_detectFacesInImage:(id)a0 error:(id *)a1;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (BOOL)isResettable;
- (id)setTrackedObjects:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (id)trackInFrame:(id)a0 error:(id *)a1;

@end
