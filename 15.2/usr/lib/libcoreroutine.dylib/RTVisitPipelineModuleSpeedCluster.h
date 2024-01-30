@class NSString, RTLocation, RTVisitHyperParameter, RTVisit;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule> {
    RTVisit *_workingVisit;
    RTLocation *_lastPoint;
    RTVisitHyperParameter *_hyperParameter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHyperParameter:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)process:(id)a0;
- (void)clearAndAddForcedExitSignalToClusters:(id)a0;
- (void)clearWorkingVisit;

@end
