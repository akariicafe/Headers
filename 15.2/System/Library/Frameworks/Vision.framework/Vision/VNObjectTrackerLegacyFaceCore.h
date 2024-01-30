@class FaceCoreDetector, NSDictionary;

@interface VNObjectTrackerLegacyFaceCore : VNTracker {
    FaceCoreDetector *_detector;
    NSDictionary *_detectOptions;
    NSDictionary *_extractOptions;
}

+ (id)_convertOptionsToFaceCoreExtractOptions:(id)a0;
+ (id)_convertOptionsToFaceCoreDetectOptions:(id)a0;
+ (id)_convertOptionsToFaceCoreSetupOptions:(id)a0;
+ (Class)trackerObservationClass;

- (BOOL)reset:(id *)a0;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isResettable;
- (id)setTrackedObjects:(id)a0 inFrame:(id)a1 error:(id *)a2;
- (id)trackInFrame:(id)a0 error:(id *)a1;
- (id)_detectFacesInImage:(id)a0 error:(id *)a1;

@end
