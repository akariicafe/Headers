@class NSMutableDictionary, NSURL, NSMetadataQuery, NSMutableArray;

@interface GKSavedGameManager : NSObject

@property (retain, nonatomic) NSURL *ubiquityURL;
@property (nonatomic) BOOL ubiquityUnavailable;
@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSMutableDictionary *documents;
@property (nonatomic) long long queryDisableCount;
@property (retain, nonatomic) NSMutableArray *fetchHandlers;

+ (id)sharedManager;

- (id)savedGameForDocuments:(id)a0;
- (void)queryDidFinishGathering:(id)a0;
- (id)documentToSaveWithName:(id)a0;
- (id)savedGameForDocument:(id)a0;
- (void)callFetchHandlers;
- (void)queryDidUpdate:(id)a0;
- (void)removeDocument:(id)a0;
- (id)errorForNoUbiquity;
- (void)documentModified:(id)a0;
- (id)fileURLForName:(id)a0;
- (void)ubiquityAvailabilityChanged:(id)a0;
- (void)startSavedGameQuery;
- (void)enableQueryUpdates;
- (void)dealloc;
- (void)setupUbiquity;
- (void)saveGameData:(id)a0 withName:(id)a1 completionHandler:(id /* block */)a2;
- (void)documentConflictStateChanged:(id)a0;
- (id)documentForSavedGame:(id)a0;
- (void)resolveConflictingSavedGames:(id)a0 withData:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)disableQueryUpdates;
- (void)loadDataForSavedGame:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)a0;
- (void)addDocument:(id)a0;
- (void).cxx_destruct;
- (id)savedGamesWithName:(id)a0;
- (id)currentDocumentWithName:(id)a0;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id /* block */)a0;
- (void)deleteSavedGamesWithName:(id)a0 completionHandler:(id /* block */)a1;

@end
