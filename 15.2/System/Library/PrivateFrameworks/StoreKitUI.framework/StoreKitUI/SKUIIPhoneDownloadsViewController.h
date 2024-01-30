@class _UIContentUnavailableView, NSArray, SKUIClientContext, NSString, UITableView;
@protocol SKUIDownloadsChildViewControllerDelegate;

@interface SKUIIPhoneDownloadsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    _UIContentUnavailableView *_noContentView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSArray *downloads;
@property (weak, nonatomic) id<SKUIDownloadsChildViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)_reload;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)reloadDownloadsAtIndexes:(id)a0;

@end
