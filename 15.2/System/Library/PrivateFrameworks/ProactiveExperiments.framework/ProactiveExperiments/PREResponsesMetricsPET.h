@class PETEventTracker2, NSString;
@protocol PREExperimentResolverProtocol;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {
    PETEventTracker2 *_tracker;
    id<PREExperimentResolverProtocol> _resolver;
    BOOL _isApricotDevice;
    NSString *_processName;
}

- (void).cxx_destruct;
- (id)init;
- (id)tracker;
- (BOOL)isApricotDevice;
- (void)registerResponsesGenerated:(id)a0;
- (void)registerResponseTapped:(id)a0;
- (void)registerResponseViewed:(id)a0;
- (id)initWithExperimentResolver:(id)a0;
- (id)initWithTracker:(id)a0 experimentResolver:(id)a1;
- (id)_responseListFromGeneratedEvent:(id)a0;

@end
