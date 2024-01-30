@class MPAlternateTrack, NSString, MPAVItem, _UIBackdropView, UITableView;

@interface _MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MPAVItem *_avItem;
    UITableView *_tableView;
    BOOL _hasAudio;
    BOOL _hasSubtitles;
    MPAlternateTrack *_originalAudioTrack;
    MPAlternateTrack *_originalSubtitleTrack;
    MPAlternateTrack *_newAudioTrack;
    MPAlternateTrack *_newSubtitleTrack;
    _UIBackdropView *_backdropView;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAVItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)_configurePopover;
- (void)_applyChanges;
- (id)_trackAtIndexPath:(id)a0;
- (void)_doneButtonTapped:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
