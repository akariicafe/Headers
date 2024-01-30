@class NSOperationQueue, OKProducerPlugin, OKPresentation;
@protocol OKProducerDelegate;

@interface OKProducer : NSObject {
    NSOperationQueue *_liveAuthoringOperationQueue;
    BOOL _liveAuthoringInProgress;
    double _startLiveAuthorTime;
}

@property (retain, nonatomic) OKProducerPlugin *plugin;
@property (retain, nonatomic) OKPresentation *presentation;
@property (nonatomic) id<OKProducerDelegate> delegate;

+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)supportsLiveAuthoring;
- (BOOL)author:(BOOL)a0 progressBlock:(id /* block */)a1 requiresProducer:(inout BOOL *)a2 error:(id *)a3;
- (BOOL)liveAuthorInitialBootstrap:(id /* block */)a0 error:(id *)a1;
- (id)initWithPresentation:(id)a0 andPlugin:(id)a1;
- (void)cancelLiveAuthoring:(BOOL)a0;
- (BOOL)needsLiveAuthoring;
- (id)liveAuthorNextChunk:(id /* block */)a0 error:(id *)a1;
- (float)currentLiveAuthoringProgress;
- (unsigned long long)totalNumberOfLiveAuthoringItems;
- (float)liveAuthoringProgressForMediaItem:(id)a0;
- (id)liveAuthoringOperationQueue;
- (double)_continueLiveAuthoringDelay;
- (void)_continueLiveAuthoring;
- (BOOL)migratePresentation:(id /* block */)a0 error:(id *)a1;
- (void)cleanupPresentation:(id /* block */)a0;
- (void)updateSynopsisGuideline;
- (BOOL)prepareLiveAuthoringIfNeeded:(id /* block */)a0 error:(id *)a1;
- (void)startLiveAuthoringIfNeeded;
- (BOOL)resetLiveAuthoring;
- (void)setSettingsObject:(id)a0 forKeyPath:(id)a1 onWidget:(id)a2;
- (void)addSettingsFromDictionary:(id)a0 onWidget:(id)a1;
- (void)didPanMediaForWidget:(id)a0 toState:(id)a1;
- (void)didChangeTextForWidget:(id)a0 toSettings:(id)a1;

@end
