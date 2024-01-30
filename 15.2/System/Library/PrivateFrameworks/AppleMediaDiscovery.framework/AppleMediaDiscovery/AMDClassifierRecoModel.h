@interface AMDClassifierRecoModel : AMDBaseRecoModel

- (id)initWithId:(id)a0 andVersion:(short)a1;
- (id)topNPredictions:(unsigned long long)a0 usingFeatureProvider:(id)a1 andInputBuilder:(id)a2 andOutputBuilder:(id)a3 withColdstartModelId:(id)a4 error:(id *)a5;

@end
