@class AVMediaSelectionOption, AVPlayerController;

@interface AVMediaSelectionTableViewController : UITableViewController {
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
}

@property (retain, nonatomic) AVPlayerController *playerController;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)a0;
- (BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)a0;
- (void)playerControllerMediaSelectionChanged:(id)a0;

@end
