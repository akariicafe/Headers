@class NSDictionary, NSMutableDictionary;

@interface HDLab : NSObject {
    NSMutableDictionary *_experiments;
    NSMutableDictionary *_analyses;
    NSMutableDictionary *_diagnostics;
}

@property (class, readonly, nonatomic) HDLab *defaultLab;

@property (readonly, nonatomic) NSDictionary *availableExperiments;
@property (readonly, nonatomic) NSDictionary *availableAnalyses;
@property (readonly, nonatomic) NSDictionary *availableDiagnostics;

- (id)init;
- (void).cxx_destruct;
- (void)addAnalysisWithName:(id)a0 block:(id /* block */)a1;
- (void)addDiagnosticWithName:(id)a0 block:(id /* block */)a1;
- (void)addDiagnosticWithName:(id)a0 experimentName:(id)a1 analysisName:(id)a2 block:(id /* block */)a3;
- (void)addDiagnosticWithName:(id)a0 summary:(id)a1 experimentName:(id)a2 analysisName:(id)a3;
- (void)addExperimentWithName:(id)a0 block:(id /* block */)a1;
- (id)analysisWithName:(id)a0;
- (id)diagnosticWithName:(id)a0;
- (id)experimentWithName:(id)a0;

@end
