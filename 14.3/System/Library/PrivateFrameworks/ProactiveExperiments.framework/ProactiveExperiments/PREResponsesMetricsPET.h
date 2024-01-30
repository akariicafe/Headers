@class PETEventTracker2, NSString, NSObject;
@protocol PREResponsesTrialProtocol;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {
    PETEventTracker2 *_tracker;
    NSObject<PREResponsesTrialProtocol> *_trial;
    BOOL _isApricotDevice;
    NSString *_processName;
}

- (void).cxx_destruct;
- (id)tracker;
- (BOOL)isApricotDevice;
- (void)registerResponsesGenerated:(id)a0;
- (void)registerResponseTapped:(id)a0;
- (id)initWithTrial:(id)a0;
- (id)initWithTracker:(id)a0 trial:(id)a1;
- (id)_responseListFromGeneratedEvent:(id)a0;

@end
