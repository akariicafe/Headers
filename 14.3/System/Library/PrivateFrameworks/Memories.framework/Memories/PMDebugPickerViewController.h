@class NSArray, NSString, NSDictionary, NSObject;
@protocol NSCopying, PMPlayerControlling;

@interface PMDebugPickerViewController : UITableViewController

@property (nonatomic) long long selectedSection;
@property (nonatomic) long long selectedRow;
@property (retain, nonatomic) NSArray *sortedMoodIDs;
@property (weak, nonatomic) id<PMPlayerControlling> playerController;
@property (copy, nonatomic) NSObject<NSCopying> *originalEntryID;
@property (copy, nonatomic) NSString *moodID;
@property (copy, nonatomic) id /* block */ replaceMoodPartForEntryIDBlock;
@property (retain, nonatomic) NSDictionary *entryIDsByMood;
@property (retain, nonatomic) NSDictionary *displayNamesByEntryID;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (BOOL)_setSelected:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void)_addObserverForTextSizeDidChange;
- (void)_removeObserverForTextSizeDidChange;
- (void)userTextSizeDidChange;
- (id)_indexPathForEntryID:(id)a0;
- (id)_moodIDForSection:(long long)a0;
- (id)_entryIDForIndexPath:(id)a0;

@end
