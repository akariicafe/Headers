@class NSString, PGGraphNamingProcessor;

@interface PGNamingBirthdayAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (void)findBirthdayMatchesFromBirthdayByContactIdentifier:(id)a0 contactIdentifiersWithExplicitBirthday:(id)a1 graph:(id)a2 birthdaySceneNodes:(id)a3 withProgressBlock:(id /* block */)a4;
- (id)birthdaySceneNodesFromGraph:(id)a0;
- (id)weakBirthdayMomentNodesUsingSceneNodes:(id)a0;

@end
