@class FAProfilePictureStore, RUITableView;

@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {
    RUITableView *_remoteTableViewController;
    FAProfilePictureStore *_pictureStore;
}

+ (BOOL)shouldShowPicturesInPage:(id)a0;
+ (BOOL)_shouldShowPictureInSection:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithTableView:(id)a0 ruiTableView:(id)a1 pictureStore:(id)a2;
- (void)_profilePictureStoreDidReload;

@end
