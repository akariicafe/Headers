@class PMMusicProvider, NSString, VEKReachability, UITableView, VEKSong, NSObject, VEKBlueprint, AVPlayer;
@protocol PMEditProviderDelegate, OS_dispatch_queue, NSObject;

@interface MiroMusicMenuViewController : UIViewController <MPMediaPickerControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
    NSObject<OS_dispatch_queue> *_downloadQueue;
}

@property (nonatomic) BOOL observingAppWillResignActive;
@property (retain, nonatomic) VEKBlueprint *previousBlueprint;
@property (retain, nonatomic) id<NSObject> artworkDownloadObserver;
@property (retain, nonatomic) VEKReachability *reachability;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) id playbackObserver;
@property (retain, nonatomic) VEKSong *playingSong;
@property (nonatomic) long long playingSongSection;
@property (nonatomic) long long playingSongRow;
@property (retain, nonatomic) VEKSong *nonFeaturedSong;
@property (nonatomic) BOOL observingAppWillResign;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;
@property (retain, nonatomic) PMMusicProvider *musicProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (long long)networkStatus;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)mediaPicker:(id)a0 didPickMediaItems:(id)a1;
- (void)mediaPickerDidCancel:(id)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)popFromNavigationController;
- (void)_setupReachabiliy;
- (void)_addObserverForTextSizeDidChange;
- (void)_removeObserverForTextSizeDidChange;
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
- (void)didChangeMusicSwitch:(id)a0;
- (BOOL)_has_iTunesMusic;
- (id)fetchAlbumArtworkFromMediaIdentifier:(id)a0;
- (void)_updateProductionWithSong:(id)a0;
- (void)userTextSizeDidChange;
- (void)_applicationWillResign;
- (void)networkStatusChanged:(id)a0;
- (void)shouldPreviewSong:(id)a0;
- (id)albumArtworkForSong:(id)a0;

@end
