@class NSOrderedSet, NSMutableSet;
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {
    NSOrderedSet *_albumsOrderedSet;
    NSMutableSet *_selectedAlbumGuids;
}

@property (nonatomic) BOOL allowsMutlipleSelection;
@property (weak, nonatomic) id<PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate;

+ (id)albumListForContentMode:(int)a0;
+ (id /* block */)_albumsComparator;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didReceiveMemoryWarning;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })contentSizeForViewInPopover;
- (void)addSelectedCloudGuid:(id)a0;
- (id)posterImageForAlbum:(id)a0 imageView:(id)a1;
- (void)reloadActions;

@end
