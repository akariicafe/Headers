@class NSArray, NSString;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>

@property (copy, nonatomic) NSArray *people;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPeople:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)_updateHeader;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (BOOL)shouldUpdateStatusBarTitle;
- (void)_setupHeader;
- (id)initWithPeople:(id)a0 options:(unsigned long long)a1;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)a0;
- (void)refreshName;
- (void)_replaceSelfWithNewDetailViewForPerson:(id)a0;
- (void)_launchNaming:(id)a0;
- (void)_updateDataSourceWithCollectionForPerson:(id)a0;

@end
