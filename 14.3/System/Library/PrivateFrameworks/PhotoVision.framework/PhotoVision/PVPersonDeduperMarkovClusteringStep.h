@interface PVPersonDeduperMarkovClusteringStep : PVPersonDeduperStep

+ (id)markovClustering:(id)a0 withDistanceBlock:(id /* block */)a1;

- (id)name;
- (void)dedupePersons:(id)a0 withOtherPersons:(id)a1 updateBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;

@end
