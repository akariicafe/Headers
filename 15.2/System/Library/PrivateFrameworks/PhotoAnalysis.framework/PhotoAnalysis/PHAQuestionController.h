@class NSObject, NSMutableDictionary, PGTrialSession, NSUbiquitousKeyValueStore, PGManager;
@protocol OS_os_log;

@interface PHAQuestionController : NSObject

@property (retain, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *store;
@property (retain, nonatomic) PGTrialSession *trialSession;
@property (retain, nonatomic) NSMutableDictionary *questionTypeImportanceByQuestionType;

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)generateQuestionsWithOptions:(long long)a0 progress:(id /* block */)a1;
- (BOOL)generateQuestionsWithOptions:(long long)a0 limit:(unsigned long long)a1 progress:(id /* block */)a2;
- (id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)a0 withLimit:(unsigned long long)a1;
- (void)assignScoreToQuestions:(id)a0;
- (BOOL)persistQuestions:(id)a0;
- (double)importanceOfQuestionType:(id)a0;
- (id)questionFactoriesForOptions:(long long)a0;
- (id)allQuestionFactories;
- (void)_updateInvalidQuestionsWithProgressBlock:(id /* block */)a0;
- (void)_syncAnsweredQuestionsWithProgressBlock:(id /* block */)a0;
- (void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(id /* block */)a0;
- (id)currentQuestionsKVSData;
- (void)removeCurrentKVSData;
- (unsigned long long)numberOfSyndicationAssetsQuestionsToGenerate;

@end
