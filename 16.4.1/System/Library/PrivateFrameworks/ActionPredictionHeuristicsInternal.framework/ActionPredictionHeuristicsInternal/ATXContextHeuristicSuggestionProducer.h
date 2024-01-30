@interface ATXContextHeuristicSuggestionProducer : NSObject

+ (id)mediaWithName:(id)a0 type:(long long)a1 adamIdentifier:(long long)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5 expirationDate:(id)a6;
+ (id)createSuggestionFromShortcutsAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 title:(id)a3 subtitle:(id)a4 score:(double)a5 shouldClearOnEngagement:(BOOL)a6;
+ (id)suggestionForConferenceWithURL:(id)a0 score:(double)a1 predictionReasons:(unsigned long long)a2 localizedReason:(id)a3 criteria:(id)a4;
+ (id)suggestionForDNDWithTitle:(id)a0 eventUniqueID:(id)a1 identifier:(id)a2 until:(id)a3 score:(double)a4 predictionReasons:(unsigned long long)a5 localizedReason:(id)a6 turnOn:(BOOL)a7 validFromStartDate:(id)a8 validToEndDate:(id)a9;
+ (id)suggestionWithAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3;
+ (id)navigationToDestination:(id)a0 title:(id)a1 subtitle:(id)a2 transportType:(unsigned long long)a3 destinationName:(id)a4 predictionReasons:(unsigned long long)a5 localizedReason:(id)a6 score:(double)a7 shouldClearOnEngagement:(BOOL)a8 validStartDate:(id)a9 validEndDate:(id)a10;
+ (id)suggestionWithExecutableSpecification:(id)a0 title:(id)a1 subtitle:(id)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5;
+ (id)_executableSpecForSpotlightAction:(id)a0;
+ (id)suggestionWithSpotlightAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3;
+ (id)_clientModelSpectForContextHeuristics;
+ (id)setAirplaneMode:(BOOL)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 score:(double)a3 validFromStartDate:(id)a4 validToEndDate:(id)a5;
+ (id)mediaWithName:(id)a0 type:(long long)a1 umcIdentifier:(id)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5 expirationDate:(id)a6;
+ (id)_mediaWithName:(id)a0 type:(long long)a1 adamIdentifier:(long long)a2 umcIdentifier:(id)a3 predictionReasons:(unsigned long long)a4 localizedReason:(id)a5 score:(double)a6 expirationDate:(id)a7;
+ (id)_suggestionWithSpotlightRecentAction:(id)a0 score:(double)a1;
+ (id)_uiSpecWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 shouldClearOnEngagement:(BOOL)a3 predictionReasons:(unsigned long long)a4;
+ (id)_bundleIDWithURL:(id)a0;
+ (id)_executableSpecForShortcutsAction:(id)a0;
+ (id)_clientModelSpecForSpotlightRecents;
+ (id)flightCheckInActivityWithSubtitle:(id)a0 url:(id)a1 teamIdentifier:(id)a2 predictionReasons:(unsigned long long)a3 localizedReason:(id)a4 score:(double)a5 validStartDate:(id)a6 validEndDate:(id)a7;
+ (id)suggestionWithShortcutAction:(id)a0 predictionReasons:(unsigned long long)a1 localizedReason:(id)a2 title:(id)a3 subtitle:(id)a4 score:(double)a5;
+ (id)rideshareAppActionForDestination:(id)a0 preferredBundleId:(id)a1 predictionReasons:(unsigned long long)a2 title:(id)a3 localizedReason:(id)a4 score:(double)a5 validFromStartDate:(id)a6 validToEndDate:(id)a7;
+ (id)suggestionsForRecentResults:(id)a0;

@end
