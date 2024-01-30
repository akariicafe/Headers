@class BWGraph, NSString, FigCaptureDeferredProcessingJob, NSSet, NSDictionary, NSObject, BWDeferredProcessingSourceNode;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_transaction> *_graphTransaction;
    NSString *_currentPortType;
    BOOL _currentIntelligentDistortionCorrectionEnabled;
    BOOL _currentGeomtetricDistortionCorrectionEnabled;
    BOOL _currentDemosaicedRawEnabled;
    int _currentDeepZoomVersion;
    BWGraph *_graph;
    BOOL _graphRunning;
    BWDeferredProcessingSourceNode *_sourceNode;
    FigCaptureDeferredProcessingJob *_job;
    BOOL _interactiveQoS;
    long long _graphPrepareDurationNS;
    NSSet *_allSensorIDStrings;
    NSDictionary *_defaultSensorIDsByPortType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedProcessingEngine;

- (void)releaseResources;
- (void)graph:(id)a0 didFinishStartingWithError:(int)a1;
- (void)_runJob;
- (id)init;
- (void)dealloc;
- (void)graphDidPrepareNodes:(id)a0;
- (void)_handleJobCompletion:(int)a0;
- (BOOL)_reuseCurrentGraphForJob:(id)a0;
- (void)_releaseGraph;
- (void)_createGraphAndRunJobWhenStarted;
- (void)_handleProcessedStillImage:(struct opaqueCMSampleBuffer { } *)a0 error:(int)a1 settings:(id)a2;
- (void)_reportCoreAnalyticsDataWithError:(int)a0 container:(id)a1;
- (void)_cleanupFromJob;
- (void)executeJob:(id)a0;

@end
