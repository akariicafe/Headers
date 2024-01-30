@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (id)stringForFallbackActionType:(unsigned long long)a0;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)fallbackActionsBundle;

- (id)localizedStringForKey:(id)a0;
- (id)createAnEventForCurrentDate:(id)a0;
- (id)proactiveSuggestionForAction:(id)a0;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)startATimer;
- (id)initWithClientModelSpec:(id)a0;
- (id)viewPhotos;
- (void).cxx_destruct;
- (id)init;
- (id)suggestionsForAllFallbackActions;
- (id)searchSafari;
- (id)sendAMessage;

@end
