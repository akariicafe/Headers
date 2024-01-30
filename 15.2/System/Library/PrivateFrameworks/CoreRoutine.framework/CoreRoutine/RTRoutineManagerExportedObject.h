@class RTRoutineManager, NSString;

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol>

@property (weak, nonatomic) RTRoutineManager *routineManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScenarioTrigger:(id)a0 withError:(id)a1;
- (void)onLeechedLowConfidenceVisit:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (void)onVisit:(id)a0 withError:(id)a1;
- (id)initWithRoutineManager:(id)a0;
- (void)onVehicleEvents:(id)a0 error:(id)a1;
- (void)onLeechedVisit:(id)a0 withError:(id)a1;

@end
