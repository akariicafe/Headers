@class ATXFreeMomentDataCollectionPBFreeMomentLogEntry;

@interface ATXFreeMomentMetricsLog : NSObject {
    ATXFreeMomentDataCollectionPBFreeMomentLogEntry *_metric;
}

- (void).cxx_destruct;
- (id)initWithFeatureVector:(id)a0 freeMomentReason:(id)a1 userResponse:(BOOL)a2 userFeedback:(id)a3 isStaleNotification:(BOOL)a4;
- (id)getPBCodable;

@end
