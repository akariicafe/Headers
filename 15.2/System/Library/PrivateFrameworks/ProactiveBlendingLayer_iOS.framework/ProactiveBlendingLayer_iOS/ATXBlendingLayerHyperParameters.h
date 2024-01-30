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

- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (long long)minConfidenceCategoryToConsider;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (id)abGroup;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (double)sessionLogSamplingRate;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (id)clientModelPriorityOrder;
- (id)initForTestingWithTrialAssetsOnly;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;

@end
