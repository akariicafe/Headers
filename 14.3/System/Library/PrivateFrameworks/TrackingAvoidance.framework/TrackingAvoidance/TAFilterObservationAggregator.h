@interface TAFilterObservationAggregator : NSObject

+ (id)aggregateObservationsThroughHistoryForDetectionResults:(id)a0 visitSnapshotBuffer:(id)a1 intervisitSnapshotBuffer:(id)a2 clock:(id)a3;
+ (id)aggregateObservationsThroughHistoryForSingleDetection:(id)a0 visitSnapshotBuffer:(id)a1 intervisitSnapshotBuffer:(id)a2 clock:(id)a3;

@end
