@class NSArray, VUIMediaLibrary, VUIViewControllerContentPresenter, VUILibraryMenuItemViewCell, NSString;
@protocol VUIHomeShareViewControllerDelegate;

@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>

@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (weak, nonatomic) id<VUIHomeShareViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureWithCollectionView:(id)a0;
- (id)initWithMediaLibrary:(id)a0;
- (id)_deviceMediaLibrary;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_addMediaLibraryNotificationObservers;

@end
