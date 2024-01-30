@class RTRoutineManager, NSString;

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol>

@property (weak, nonatomic) RTRoutineManager *routineManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLeechedVisit:(id)a0 withError:(id)a1;
- (void)onLeechedLowConfidenceVisit:(id)a0 withError:(id)a1;
- (void)onVehicleEvents:(id)a0 error:(id)a1;
- (void)onScenarioTrigger:(id)a0 withError:(id)a1;
- (void)onVisit:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (id)initWithRoutineManager:(id)a0;

@end
