@class NSString, NSDictionary;

@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol> {
    NSDictionary *_parameters;
    NSDictionary *_clientModelsToConsiderForConsumerSubType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)abHelperWithMobileAssets;
+ (id)abHelperWithTrialAssets;

- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)abGroup;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (id)clientModelPriorityOrder;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)initForTestingWithTrialAssetsOnly;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (id)clientModelsToConsiderForConsumerSubType;
- (long long)minConfidenceCategoryToConsider;
- (id)init;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (void).cxx_destruct;
- (double)sessionLogSamplingRate;

@end
