@class AVMediaSelectionOption, AVPlayerController;

@interface AVMediaSelectionTableViewController : UITableViewController {
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
}

@property (retain, nonatomic) AVPlayerController *playerController;

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)playerControllerMediaSelectionChanged:(id)a0;
- (BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)a0;
- (BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
