@class NSString, Reachability, VEKSong, PMMusicProvider, NSObject, AVPlayer;
@protocol PMEditorToolbarOwner, PMEditProviderDelegate, OS_dispatch_queue;

@interface MiroSmartMusicMenuViewController : UITableViewController {
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

@property (nonatomic) long long selectedSection;
@property (nonatomic) long long selectedRow;
@property (readonly, nonatomic) NSString *moodID;
@property (retain, nonatomic) Reachability *reachability;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) id playbackObserver;
@property (retain, nonatomic) VEKSong *productionSong;
@property (retain, nonatomic) VEKSong *playingSong;
@property (nonatomic) long long playingSongRow;
@property (nonatomic) BOOL observingAppWillResign;
@property (retain, nonatomic) PMMusicProvider *musicProvider;
@property (weak, nonatomic) id<PMEditorToolbarOwner> toolbarOwner;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;

- (void)setup;
- (long long)networkStatus;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setupReachabiliy;
- (void)_addObserverForTextSizeDidChange;
- (void)_pausePreview;
- (id)_getPlayingCell;
- (void)_removeObserverForPlaybackEnded;
- (void)_removeObserverForAppWillResign;
- (void)_addObserverForPlaybackEnded;
- (void)_addObserverForAppWillResign;
- (void)_postProgressUpdate:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)statusForSong:(id)a0;
- (void)resetPlayingCell;
- (void)_previewSong:(id)a0;
- (void)toggleDownloadInCell:(id)a0;
- (void)_updateProductionWithSong:(id)a0;
- (void)userTextSizeDidChange;
- (void)_applicationWillResign;
- (void)networkStatusChanged:(id)a0;
- (void)shouldPreviewSong:(id)a0;
- (BOOL)_setSelectedSection:(long long)a0 andRow:(long long)a1;
- (void)scrollToSelectedIndexPath;
- (id)_selectedTableViewCell;

@end
