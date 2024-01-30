@interface AMDClassifierRecoModel : AMDBaseRecoModel

- (id)getPredictions:(unsigned long long)a0 andInputBuilder:(id)a1 andOutputBuilder:(id)a2 withColdstartModelId:(id)a3 error:(id *)a4;
- (id)initWithId:(id)a0 andVersion:(unsigned long long)a1;

@end
