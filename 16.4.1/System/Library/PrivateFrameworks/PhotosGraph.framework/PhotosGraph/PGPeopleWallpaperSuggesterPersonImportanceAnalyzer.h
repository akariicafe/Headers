@class NSString, NSMutableDictionary, PGGraph, CLSCurationContext, NSObject, NSDate;
@protocol OS_os_log;

@interface PGPeopleWallpaperSuggesterPersonImportanceAnalyzer : NSObject {
    PGGraph *_graph;
    CLSCurationContext *_curationContext;
    NSObject<OS_os_log> *_loggingConnection;
    NSString *_mePersonLocalIdentifier;
    NSDate *_latestLibraryDate;
    NSDate *_earliestDateForCandidates;
    NSDate *_earliestDateForBasePersons;
    NSMutableDictionary *_personInformationByPersonLocalIdentifier;
    NSMutableDictionary *_momentLocalIdentifiersByPersonLocalIdentifier;
}

@property (nonatomic) double normalizedDeviationForVeryImportantPersons;
@property (nonatomic) double normalizedDeviationForImportantPersons;
@property (nonatomic) BOOL favoritePersonsAreVIPs;

- (void).cxx_destruct;
- (id)personInformationsWithProgress:(id /* block */)a0;
- (BOOL)_isVeryImportantPersonWithPersonNode:(id)a0;
- (void)computePersonImportancesWithProgress:(id /* block */)a0;
- (void)gatherMomentInformationWithProgress:(id /* block */)a0;
- (void)gatherPersonInformationWithProgress:(id /* block */)a0;
- (id)initWithGraph:(id)a0 curationContext:(id)a1 loggingConnection:(id)a2;

@end
