@class NSArray, NSString;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>

@property (copy, nonatomic) NSArray *people;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateHeader;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setupHeader;
- (void)_launchNaming:(id)a0;
- (void)_replaceSelfWithNewDetailViewForPerson:(id)a0;
- (void)_updateDataSourceWithCollectionForPerson:(id)a0;
- (id)initWithPeople:(id)a0 ignoreSharedLibraryFilters:(BOOL)a1;
- (id)initWithPeople:(id)a0 options:(unsigned long long)a1 ignoreSharedLibraryFilters:(BOOL)a2;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)a0;
- (BOOL)pu_shouldOptOutFromChromelessBars;
- (void)refreshName;
- (BOOL)shouldUpdateStatusBarTitle;

@end
