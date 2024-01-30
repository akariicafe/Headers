@interface ATXStaticSuggestionsManager : NSObject

+ (id)preservePreviousAppPositionsForPreviousSuggestions:(id)a0 newSuggestions:(id)a1 uiLimit:(unsigned long long)a2;
+ (BOOL)suggestionsAreAllAppExecutableTypeAndHaveValidHash:(id)a0;
+ (id)executableObjectHashToPositionMappingForSuggestions:(id)a0;
+ (BOOL)isValidPreviousPosition:(id)a0 uiLimit:(unsigned long long)a1 newSuggestionsCount:(unsigned long long)a2;

@end
