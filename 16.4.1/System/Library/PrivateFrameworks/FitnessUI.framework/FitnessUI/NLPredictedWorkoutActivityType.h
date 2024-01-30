@class NSDictionary;

@interface NLPredictedWorkoutActivityType : FIUIWorkoutActivityType

@property (readonly, nonatomic) NSDictionary *baseMetadata;

- (id)uniqueIdentifier;

@end
