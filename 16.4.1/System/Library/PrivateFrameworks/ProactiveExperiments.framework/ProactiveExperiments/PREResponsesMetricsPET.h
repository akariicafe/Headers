@class NSString, PETEventTracker2;
@protocol PREExperimentResolverProtocol;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {
    PETEventTracker2 *_tracker;
    id<PREExperimentResolverProtocol> _resolver;
    BOOL _isApricotDevice;
    NSString *_processName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tracker;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isApricotDevice;
- (id)_responseListFromGeneratedEvent:(id)a0;
- (id)initWithExperimentResolver:(id)a0;
- (id)initWithTracker:(id)a0 experimentResolver:(id)a1;
- (void)registerResponseTapped:(id)a0;
- (void)registerResponseViewed:(id)a0;
- (void)registerResponsesGenerated:(id)a0;

@end
