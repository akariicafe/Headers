@class CNGeminiChannel, NSString, UITableViewController, NSMutableArray, NSIndexPath;
@protocol UINavigationControllerDelegate, CNPickerControllerDelegate;

@interface CNGeminiPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableViewController *tableViewController;
@property (retain, nonatomic) NSMutableArray *geminiChannels;
@property (retain, nonatomic) CNGeminiChannel *preferredGeminiChannel;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (weak, nonatomic) id<CNPickerControllerDelegate, UINavigationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)didPickItem;
- (void)donePicker:(id)a0;
- (void)setGeminiResult:(id)a0;
- (id)initWithGeminiResult:(id)a0;
- (void)setGeminiResult:(id)a0 reload:(BOOL)a1;
- (void)cancelPicker:(id)a0;
- (id)indexPathForGeminiChannel:(id)a0;
- (id)geminiChannelForIndexPath:(id)a0;
- (void)prepareCell:(id)a0 atIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;

@end
