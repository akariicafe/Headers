@class NSString, NSNumber, NSDictionary;

@interface MLPredictionEvent : NSObject <CUTCoreAnalyticsMetric> {
    unsigned long long _featuresPredictionCountSoFar;
    double _featuresPredictionDuration;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSNumber *firstPartyExecutable;
@property (copy, nonatomic) NSNumber *modelType;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)predictionEventQueue;
- (id)featuresPredictionCountSoFar;
- (id)featuresPredictionDuration;
- (void)maybeLogPredictionEvent:(unsigned long long)a0;

@end
