@class SPUISearchViewController, SPUIPPTTypingHelper, UIApplication;

@interface SPUITestingHelper : NSObject

@property (retain) SPUISearchViewController *searchViewController;
@property (retain) SPUIPPTTypingHelper *typingHelper;
@property (readonly) UIApplication *activeApp;
@property BOOL finishedKeyboardLaunch;
@property BOOL finishedTableUpdate;

+ (id)indexPathsOfRowsForSectionTitle:(id)a0 needsCard:(BOOL)a1 forTestingViewController:(id)a2;

- (id)initWithSearchViewController:(id)a0;
- (void).cxx_destruct;
- (void)performTest:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)canPerformTest:(id)a0;
- (void)finishLaunchTestIfNeeded;
- (void)performCardScrollTest:(id)a0 queryKind:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)performPushPopCardsOnTest:(id)a0 options:(id)a1 needsCard:(BOOL)a2 sectionHeader:(id)a3 atDesk:(BOOL)a4 queryKind:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)performScrollOnResultsView:(id)a0 testName:(id)a1 completion:(id /* block */)a2;
- (void)performScrollOnSearchViewWithTestName:(id)a0 completion:(id /* block */)a1;
- (void)resultViewController:(id)a0 finishedGettingAllResults:(id /* block */)a1;
- (void)runPushTest:(id)a0 sectionHeader:(id)a1 searchString:(id)a2 completion:(id /* block */)a3;
- (void)scrollEntityForTest:(id)a0 forQuery:(id)a1 completion:(id /* block */)a2;
- (void)scrollForSectionHeader:(id)a0 forSearchString:(id)a1 testName:(id)a2 queryKind:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)scrollMainResultsForTest:(id)a0 forQuery:(id)a1 queryKind:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)searchForSectionHeader:(id)a0 testName:(id)a1 forSearchString:(id)a2 queryKind:(unsigned long long)a3 startPushHandler:(id /* block */)a4 finishHandler:(id /* block */)a5;
- (void)searchForString:(id)a0 testName:(id)a1 event:(unsigned long long)a2 queryKind:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)searchManyStringsForTestName:(id)a0 options:(id)a1 event:(unsigned long long)a2 queryKind:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)searchString:(id)a0 andOpenResultsUnderSection:(id)a1 testName:(id)a2 needsCard:(BOOL)a3 queryKind:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)searchStrings:(id)a0 andOpenResultsUnderSection:(id)a1 testName:(id)a2 needsCard:(BOOL)a3 queryKind:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)searchViewFinishedGettingAllResultsAndFinishedDrawsWithCompletion:(id /* block */)a0;
- (void)setDefaultsForSearchVCWithqueryType:(unsigned long long)a0;
- (void)tapIndexsPathsAndPopViewControllersAfter2Seconds:(id)a0 completion:(id /* block */)a1;
- (void)testMapsCardsPushAndScrollForTestName:(id)a0 string:(id)a1 queryKind:(unsigned long long)a2 completion:(id /* block */)a3;

@end
