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

- (id)featuresPredictionCountSoFar;
- (id)featuresPredictionDuration;
- (void)maybeLogPredictionEvent:(unsigned long long)a0;
- (id)predictionEventQueue;
- (id)init;
- (void).cxx_destruct;

@end
