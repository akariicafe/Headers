@class NSArray, NSString, UIScrollView, PXPeopleDetailStatusOverlayView;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>

@property (nonatomic, getter=isProcessingFaces) BOOL processingFaces;
@property (copy, nonatomic) NSArray *people;
@property (retain, nonatomic) PXPeopleDetailStatusOverlayView *overlayView;
@property (retain, nonatomic) UIScrollView *overlayScrollView;
@property (retain, nonatomic) NSArray *overlayConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_suggestionsDidFinish:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)_applicationBecameActive:(id)a0;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)a0;
- (void)refreshName;
- (void)_createNewDetailView:(id)a0;
- (void)_setupProcessingOverlayView;
- (void)_updateOverlayContentSizeIfNeeded;
- (void)_updateOverlayConstraintsIfNeeded;
- (void)_setupHeader;
- (void)_launchNaming:(id)a0;
- (void)_updateDataSourceWithCollectionForPerson:(id)a0;
- (void)_updateHeader;
- (void)_loadComposition;
- (BOOL)shouldUpdateStatusBarTitle;
- (id)initWithPeople:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
