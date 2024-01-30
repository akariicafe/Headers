@class PGGraphBuilder, NSString, PGGraphPersonNodeCollection, NSMutableDictionary, PGHolidayClassifier, PGGraphMeNodeCollection;

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    PGHolidayClassifier *_holidayClassifier;
    PGGraphMeNodeCollection *_meNodeAsCollection;
    PGGraphPersonNodeCollection *_partnerPersonNodes;
    PGGraphPersonNodeCollection *_familyPersonNodes;
    PGGraphPersonNodeCollection *_childPersonNodes;
    PGGraphPersonNodeCollection *_fatherPersonNodes;
    PGGraphPersonNodeCollection *_motherPersonNodes;
    PGGraphPersonNodeCollection *_friendPersonNodes;
    PGGraphPersonNodeCollection *_coworkerPersonNodes;
    PGGraphPersonNodeCollection *_nonAcquaintancePersonNodes;
    unsigned long long _meBiologicalSex;
    NSMutableDictionary *_biologicalSexByPartnerPersonNodeIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyboardLanguageCodesForInfoNode:(id)a0 holidayService:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)allDatesForEventRule:(id)a0 withGraph:(id)a1;
- (double)_calculateSceneScores:(id)a0;
- (double)_dateScoreForEventRule:(id)a0 localeCode:(id)a1 holidayDate:(id)a2 momentDate:(id)a3;
- (unsigned long long)_eventRuleLocationTraitForMomentNode:(id)a0 graph:(id)a1;
- (unsigned long long)_eventRulePeopleTraitForPersonNodes:(id)a0 graph:(id)a1;
- (id)_momentsCelebratingRule:(id)a0 localDates:(id)a1 userCountryCode:(id)a2 keyboardLanguageCodes:(id)a3 graph:(id)a4 loggingConnection:(id)a5;
- (void)_prepareIfNeededWithGraph:(id)a0;
- (double)dateScoreForEventRule:(id)a0 localeCountryCode:(id)a1 momentCountryCodes:(id)a2 keyboardLanguageCodes:(id)a3 momentDate:(id)a4;
- (id)holidayCalendarEventRuleTraitsForMomentNode:(id)a0;
- (void)insertHolidaysBetweenLocalDate:(id)a0 andLocalDate:(id)a1 graph:(id)a2 locale:(id)a3 loggingConnection:(id)a4 progressBlock:(id /* block */)a5;
- (void)insertHolidaysWithMomentNodes:(id)a0 graph:(id)a1 locale:(id)a2 loggingConnection:(id)a3 progressBlock:(id /* block */)a4;
- (double)locationScoreForEventRule:(id)a0 localeCountryCode:(id)a1 momentCountryCodes:(id)a2 keyboardLanguageCodes:(id)a3;
- (BOOL)momentTraitsMatchesHolidayTraits:(id)a0 momentNode:(id)a1 loggingConnection:(id)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (double)sceneScoreForEventRule:(id)a0 localeCountryCode:(id)a1 momentCountryCodes:(id)a2 keyboardLanguageCodes:(id)a3 momentNode:(id)a4;
- (void)setGraphBuilder:(id)a0;
- (BOOL)shouldCreateHolidayEdgeForEventRule:(id)a0 momentNode:(id)a1 momentLocalDate:(id)a2 withGraph:(id)a3 loggingConnection:(id)a4 localeCountryCode:(id)a5 keyboardLanguageCodes:(id)a6;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
