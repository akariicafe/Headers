@class PXStoryModel, NSString, NSDictionary, NSMutableDictionary, PXStoryPPTResultsAggregate, PXStoryExportManager;
@protocol PXAsyncIterator, PXStoryPlayerTestElement, PXPPTDelegate;

@interface PXStoryPPTPerformer : NSObject <PXChangeObserver>

@property (readonly, weak, nonatomic) id<PXPPTDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *testOptions;
@property (readonly, nonatomic) NSString *currentTestName;
@property (readonly, nonatomic) long long currentTestIterations;
@property (readonly, nonatomic) double currentTestTimeout;
@property (readonly, nonatomic) NSMutableDictionary *extraResults;
@property (retain, nonatomic) NSString *configurationName;
@property (retain, nonatomic) id<PXAsyncIterator> configurationIterator;
@property (readonly, nonatomic) PXStoryPPTResultsAggregate *resultsAggregate;
@property (retain, nonatomic) id<PXStoryPlayerTestElement> testElement;
@property (retain, nonatomic) PXStoryModel *observedModel;
@property (copy, nonatomic) id /* block */ playbackReadyToPlayHandler;
@property (copy, nonatomic) id /* block */ playbackEndHandler;
@property (retain, nonatomic) PXStoryExportManager *exportManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finalize;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_callPlaybackEndHandlerIfNeeded;
- (id)_viewModelForPlayerTestElement:(id)a0;
- (void)_callPlaybackReadyToPlayHandlerIfNeeded;
- (void)_cleanUpPlaybackTest;
- (id)_configurationSpecificSubtestName:(id)a0;
- (void)_exportWithTestElement:(id)a0 atResolution:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)_installPlaybackEndHandler:(id /* block */)a0;
- (void)_installPlaybackReadyToPlayHandler:(id /* block */)a0;
- (id)_mainScrollViewInTungstenView:(id)a0;
- (void)_pausePlaybackWithTestElement:(id)a0;
- (void)_preparePlaybackTestWithElement:(id)a0;
- (void)_produceTimelineForViewConfiguration:(id)a0 initialCompletionHandler:(id /* block */)a1 finalCompletionHandler:(id /* block */)a2;
- (void)_requestRecipeForViewConfiguration:(id)a0 resultHandler:(id /* block */)a1;
- (void)_runScrollSubtestOnScrollView:(id)a0 containedInTungstenView:(id)a1 completion:(id /* block */)a2;
- (void)_runScrubbingSubtestWithTestElement:(id)a0 direction:(long long)a1 subtestName:(id)a2 completion:(id /* block */)a3;
- (void)_runScrubbingSubtestsWithTestElement:(id)a0 completion:(id /* block */)a1;
- (void)_skipToSegmentWithTestElement:(id)a0 direction:(long long)a1 completion:(id /* block */)a2;
- (id)_tungstenViewForStoryFeedTestElement:(id)a0;
- (id)_tungstenViewFromStoryPlayerTestElement:(id)a0;
- (void)enumerateFeedConfigurationsUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)enumerateStoryConfigurationsUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)finishSubtestWithName:(id)a0;
- (id)initWithDelegate:(id)a0 testOptions:(id)a1;
- (void)runExportTestWithElement:(id)a0 completion:(id /* block */)a1;
- (void)runFeedScrollingTestWithElement:(id)a0 completion:(id /* block */)a1;
- (void)runPlaybackStartTestWithElement:(id)a0 completion:(id /* block */)a1;
- (void)runPlaybackTestWithElement:(id)a0 completion:(id /* block */)a1;
- (void)runRecipeProductionTestWithViewConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)runScrollingWithTestElement:(id)a0 completion:(id /* block */)a1;
- (void)runScrubbingTestWithElement:(id)a0 completion:(id /* block */)a1;
- (void)runTimelineProductionTestWithViewConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)startSubtestWithName:(id)a0 metrics:(id)a1;

@end
