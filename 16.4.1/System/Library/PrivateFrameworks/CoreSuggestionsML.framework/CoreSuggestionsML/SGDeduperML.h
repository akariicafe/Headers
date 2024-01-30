@interface SGDeduperML : NSObject

+ (id /* block */)resolveByPairs:(id /* block */)a0;
+ (id /* block */)bucketerWithEqualityTest:(id /* block */)a0;
+ (id /* block */)bucketerWithLabeledBuckets:(id /* block */)a0;
+ (id /* block */)bucketerWithMapping:(id /* block */)a0;
+ (id)dedupe:(id)a0 bucketer:(id /* block */)a1 resolver:(id /* block */)a2;
+ (id /* block */)resolveByScoreBreakTiesArbitrarily:(id /* block */)a0;

@end
