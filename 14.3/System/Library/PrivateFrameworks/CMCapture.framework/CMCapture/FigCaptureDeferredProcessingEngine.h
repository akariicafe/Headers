@class BWGraph, NSString, FigCaptureDeferredProcessingJob, NSSet, NSDictionary, NSObject, BWDeferredProcessingSourceNode;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_transaction> *_graphTransaction;
    NSString *_currentPortType;
    BOOL _currentIntelligentDistortionCorrectionEnabled;
    BOOL _currentGeomtetricDistortionCorrectionEnabled;
    BOOL _currentDemosaicedRawEnabled;
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

- (void)_handleJobCompletion:(int)a0;
- (BOOL)_reuseCurrentGraphForJob:(id)a0;
- (void)_releaseGraph;
- (void)_createGraphAndRunJobWhenStarted;
- (void)_cleanupFromJob;
- (id)init;
- (void)_reportCoreAnalyticsDataWithError:(int)a0 container:(id)a1;
- (void)executeJob:(id)a0;
- (void)releaseResources;
- (void)_runJob;
- (void)dealloc;
- (void)graph:(id)a0 didFinishStartingWithError:(int)a1;
- (void)graphDidPrepareNodes:(id)a0;

@end
