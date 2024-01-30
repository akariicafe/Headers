@class BWGraph, NSString, BWDeferredProcessingSourceNode, NSSet, NSDictionary, NSObject, FigCaptureDeferredProcessingJob, BWDeferredPipelineParameters, BWStillImageSettings;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_transaction> *_graphTransaction;
    NSString *_currentPortType;
    BWDeferredPipelineParameters *_currentPipelineParameters;
    BOOL _currentDemosaicedRawEnabled;
    BWStillImageSettings *_currentSettings;
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
- (void)graphDidPrepareNodes:(id)a0;
- (void)dealloc;
- (id)init;
- (void)graph:(id)a0 didFinishStartingWithError:(int)a1;
- (void)executeJob:(id)a0;

@end
