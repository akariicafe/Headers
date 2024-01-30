@class NSDictionary;

@interface ATXBlendingLayerHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)abGroup;
- (id)clientModelPriorityOrder;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (double)sessionLogSamplingRate;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (id)clientModelsToConsiderForConsumerSubType;

@end
