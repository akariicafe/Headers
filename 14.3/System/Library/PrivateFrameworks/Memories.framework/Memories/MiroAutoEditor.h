@class NSDate, VEKProgressWatcher, NSOperationQueue, Project, MovieController, MiroMemory;
@protocol MiroSequence;

@interface MiroAutoEditor : NSObject

@property (retain, nonatomic) MiroMemory *memory;
@property (retain) Project *project;
@property long long remainingAssetsToDownload;
@property float downloadProgress;
@property (nonatomic) float progress;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain) id<MiroSequence> sequence;
@property BOOL shouldBuildMovieController;
@property (retain) MovieController *movieController;
@property BOOL shouldSave;
@property int downloadPolicy;
@property BOOL topLevelCancel;
@property (retain, nonatomic) id observer;
@property (copy, nonatomic) id /* block */ downloadCompleted;
@property (retain) NSDate *prepareStartedTime;
@property (retain) NSDate *tapStartedTime;
@property double autoEditStartedTimePPT;
@property double autoEditFinishedTimePPT;
@property double uiDidLoadTimePPT;
@property double uiDidAppearTimePPT;
@property double playbackStartedTimePPT;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (retain) VEKProgressWatcher *watcherProperty;

+ (id)sharedInstanceForPregenerate;

- (BOOL)isBusy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)updateProgress:(float)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_cancel;
- (void)updateDownloadProgress:(float)a0;
- (void)cancelAutoEdit;
- (id)initWithMemory:(id)a0 shouldBuildMovieController:(BOOL)a1;
- (id)initForPregenerate;
- (BOOL)shouldNotifyProgress;
- (void)performAutoEdit;
- (void)performAutoEditWithCompletionHandler:(id /* block */)a0;
- (void)performPersistWithPersistableThing:(id)a0;
- (BOOL)isAutoEditing;
- (void)pregenerateMemory:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_logMemoryStuff:(id)a0;
- (void)fetchAndPrintAssets:(id)a0 andMemory:(id)a1;
- (void)logFreeze:(id)a0 message:(id)a1;
- (void)_downloadSongForPregenrateWithMemory:(id)a0;
- (void)updateProject:(id)a0;
- (void)updateRemainingAssetsToDownload:(long long)a0;
- (void)updateMovieController:(id)a0;

@end
