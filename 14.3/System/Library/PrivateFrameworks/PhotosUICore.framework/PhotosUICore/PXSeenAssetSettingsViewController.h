@class NSString, PHFetchResult, UITableView;

@interface PXSeenAssetSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_suggestedSeenFetchOptions;
- (void)_fetchSeenAssetsAndReload:(BOOL)a0;
- (void)_presentConfirmationForAssetAtIndexPath:(id)a0;
- (void)_markVariationsAsUnseenForAssetAtIndexPath:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)_recommendedVariationTypeForAsset:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
