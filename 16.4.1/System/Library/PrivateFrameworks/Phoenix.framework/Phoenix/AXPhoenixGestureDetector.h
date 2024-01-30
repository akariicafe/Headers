@class AXPhoenixConfiguration, NSString, AXPhoenixClassifier, AXPhoenixMitigator, NSURL, AXPhoenixAnalytics, NSOperationQueue, CMMotionManager, NSObject, AXPhoenixAssetMonitor;
@protocol OS_dispatch_queue, AXPhoenixGestureDetectorDelegate;

@interface AXPhoenixGestureDetector : NSObject <AXPhoenixClassifierDelegate, AXPhoenixMitigatorDelegate, AXPhoenixAssetMonitorDelegate> {
    CMMotionManager *_cmMotionManager;
    NSOperationQueue *_motionInputQueue;
    AXPhoenixClassifier *_classifier;
    id<AXPhoenixGestureDetectorDelegate> _delegate;
    AXPhoenixMitigator *_mitigator;
    AXPhoenixConfiguration *_configuration;
    AXPhoenixAnalytics *_analytics;
    NSObject<OS_dispatch_queue> *_queue;
    AXPhoenixAssetMonitor *_assetMonitor;
    BOOL _clientStartedMotion;
    NSURL *_localURL;
    unsigned long long _assetVersion;
    float _tapSpeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlOfModelInThisBundle;

- (id)initWithDelegate:(id)a0;
- (void)stopWithCompletion:(id /* block */)a0;
- (void)startWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_createConfiguration;
- (void)setTapSpeed:(float)a0;
- (void)setFalsePositiveLoggingEnabled:(BOOL)a0;
- (void)_startClassifierWithCompletion:(id /* block */)a0;
- (void)_stopClassifier;
- (id)_createClassifierModelURL;
- (BOOL)_initializeAssetDrivenComponentsWithLocalURL:(id)a0 assetVersion:(unsigned long long)a1;
- (id)_mobileAssetPathForConfigOrNil;
- (id)_mobileAssetURLForModelOrNil;
- (void)_resetAssetDrivenComponents;
- (void)_setPolicyOption:(int)a0;
- (void)_startWithCompletion:(id /* block */)a0;
- (void)_stopWithCompletion:(id /* block */)a0;
- (BOOL)falsePositiveLoggingEnabled;
- (void)modelDidUpdate:(id)a0 assetVersion:(unsigned long long)a1;
- (BOOL)needsToUpdateModelToVersion:(long long)a0;
- (void)phoenixClassifier:(id)a0 failedWithError:(id)a1;
- (void)phoenixClassifierDidDetectDoubleTap:(id)a0 data:(struct { double x0; double x1; double x2; double x3; })a1 context:(id)a2;
- (void)phoenixClassifierDidDetectTripleTap:(id)a0 data:(struct { double x0; double x1; double x2; double x3; })a1 context:(id)a2;
- (void)phoenixClassifierDidLogFile:(id)a0;
- (void)phoenixMitigator:(id)a0 didFailWithError:(id)a1;
- (void)phoenixMitigator:(id)a0 displayOnDidChange:(BOOL)a1;
- (void)phoenixMitigator:(id)a0 touchOnDidChange:(BOOL)a1;
- (void)reportFalsePositive:(id)a0;
- (void)setDoubleTapPolicy;
- (void)setGeneralPolicy;
- (void)setTripleTapPolicy;

@end
