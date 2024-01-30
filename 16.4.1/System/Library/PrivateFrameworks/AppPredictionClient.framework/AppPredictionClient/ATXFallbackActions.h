@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}

+ (id)fallbackActionsBundle;
+ (unsigned long long)fallbackActionTypeForString:(id)a0;
+ (id)dateWithoutMinutesAndSeconds:(id)a0;
+ (id)stringForFallbackActionType:(unsigned long long)a0;

- (id)localizedStringForKey:(id)a0;
- (id)sendAMessage;
- (id)initWithClientModelSpec:(id)a0;
- (id)searchSafari;
- (id)createAnEventForCurrentDate:(id)a0;
- (id)suggestionforSpecifiedFallbackActionType:(unsigned long long)a0;
- (id)startATimer;
- (id)init;
- (id)viewPhotos;
- (id)suggestionsForAllFallbackActions;
- (id)proactiveSuggestionForAction:(id)a0;
- (void).cxx_destruct;

@end
