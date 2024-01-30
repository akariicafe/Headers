@protocol _DKKnowledgeQuerying;

@interface _DKPredictor : NSObject {
    id<_DKKnowledgeQuerying> _knowledgeStore;
}

+ (id)deviceActivityLikelihoodQueryPredicate;
+ (id)predictorWithKnowledgeStore:(id)a0;

- (id)predictionForStreamWithName:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2 withDataPartitionType:(unsigned long long)a3 asOfDate:(id)a4;
- (void).cxx_destruct;
- (id)deviceActivityLikelihood;
- (id)localInBedPeriod;
- (id)launchLikelihoodPredictionForApp:(id)a0;
- (id)pluginLikelihood;
- (id)launchLikelihoodForTopNApplications:(long long)a0 withLikelihoodGreaterThan:(double)a1 withTemporalResolution:(int)a2;
- (id)displayOnLikelihood;
- (id)predictionForStreamWithName:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
- (id)predictionForStreamsWithNames:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2;
- (id)predictionForStreamWithName:(id)a0 withPredicate:(id)a1 withPredictionType:(unsigned long long)a2 asOfDate:(id)a3;
- (id)expectedInBedPeriod;

@end
