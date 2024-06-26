@class FBKBugFormStub, NSArray, FBKData, FBKTeam, NSMutableDictionary, NSDictionary, FBKDeviceDiagnosticsController, FBKDraftModelSnapshot, FBKQuestionDependencyGraph, NSMutableSet, FBKFormResponse;
@protocol FBKDraftingDelegate;

@interface FBKDraftingController : NSObject

@property (retain, nonatomic) FBKFormResponse *formResponse;
@property (retain, nonatomic) FBKBugFormStub *formStub;
@property (retain) FBKQuestionDependencyGraph *dependencyGraph;
@property (retain, nonatomic) FBKTeam *team;
@property BOOL isLoading;
@property BOOL isDirty;
@property (retain, nonatomic) NSDictionary *cachedDiffableSections;
@property (retain, nonatomic) NSArray *cachedVisibleGroups;
@property (retain, nonatomic) NSMutableDictionary *cachedVisibleQuestions;
@property (retain, nonatomic) FBKDraftModelSnapshot *currentSnapshot;
@property (retain, nonatomic) NSMutableSet *questionIDsInErrorState;
@property (nonatomic) BOOL spamDebugLogs;
@property (weak, nonatomic) FBKData *FBKData;
@property (weak, nonatomic) id<FBKDraftingDelegate> delegate;
@property (retain, nonatomic) FBKDeviceDiagnosticsController *diagnosticsController;
@property BOOL isSubmitting;
@property (readonly, nonatomic) NSArray *allVisibleAnswers;
@property (readonly, nonatomic) NSArray *unansweredRequiredModalQuestions;

- (void)configure;
- (BOOL)validate:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_initForFormResponse;
- (void)_loadNewResponseForBugForm:(id)a0 orBugFormStub:(id)a1 withTeam:(id)a2 requestPlugIns:(id)a3 appToken:(id)a4;
- (void)_loadResponseWithFormResponse:(id)a0 item:(id)a1;
- (void)_resetInternalEntities;
- (BOOL)answer:(id)a0 isValidForQuestion:(id)a1;
- (void)attachAnswersToQuestionsWithGivenData:(id)a0;
- (void)automaticallyFillInAllAnswers;
- (id)choiceSetResolverWithValue:(id)a0 givenChoices:(id)a1;
- (void)didChangeAnswerToQuestion:(id)a0;
- (void)didMakeDeviceAttachmentChanges;
- (id)firstVisibleInvalidQuestion;
- (id)generateSnapshotIdentifiers:(BOOL)a0;
- (id)identifierForVisibleQuestion:(id)a0 hasAttemptedSubmission:(BOOL)a1;
- (id)indexPathForQuestion:(id)a0;
- (id)initWithFBKData:(id)a0;
- (id)invalidQuestionIDs;
- (BOOL)isQuestionVisible:(id)a0;
- (void)loadFormResponseFromContentItem:(id)a0;
- (void)loadNewResponseForBugForm:(id)a0;
- (void)loadNewResponseForBugForm:(id)a0 withTeam:(id)a1;
- (void)loadNewResponseForBugFormStub:(id)a0;
- (void)loadNewResponseForBugFormStub:(id)a0 requestPlugIns:(id)a1 appToken:(id)a2;
- (void)loadNewResponseForBugFormStub:(id)a0 withTeam:(id)a1;
- (void)loadResponseForFeedbackObject:(id)a0;
- (void)loadResponseForFeedbackObject:(id)a0 withTeam:(id)a1;
- (id)newModelSnapshot;
- (void)preemptivelyRemoveQuestionFromErrorStateWithQuestion:(id)a0;
- (id)questionGroupForSectionIdentifier:(id)a0;
- (id)questionsForSectionIdentifier:(id)a0;
- (void)reevaluateDependenciesWithQuestionChanged:(id)a0 toAdd:(id)a1 toRemove:(id)a2;
- (void)runResolvers;
- (void)sendSnapshotUpdate;
- (void)setResponse:(id)a0 forQuestion:(id)a1;
- (BOOL)updateQuestionVisibility;
- (void)updateUIAfterAutoFill;
- (void)updateVisibilityForChangedQuestion:(id)a0;
- (id)visibleQuestionForIndexPath:(id)a0;
- (id)visibleQuestionForSectionIdentifier:(id)a0 itemIdentifier:(id)a1;
- (id)visibleQuestionGroups;
- (id)visibleQuestionsForGroup:(id)a0;

@end
