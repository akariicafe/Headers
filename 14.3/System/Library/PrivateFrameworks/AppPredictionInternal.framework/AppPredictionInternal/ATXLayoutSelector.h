@class NSString, NSArray;

@interface ATXLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    unsigned char _consumerSubType;
    NSArray *_rankedSuggestions;
    NSArray *_validLayouts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
+ (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
+ (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
+ (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
+ (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
+ (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
+ (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
+ (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
+ (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
+ (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
+ (long long)minConfidenceCategoryToConsider;

@end
