@class PXPeopleSectionedDataSource, NSString, PXPeopleProgressManager;

@interface PXPeopleOnboardingViewController : UIViewController <PXChangeObserver>

@property (nonatomic) unsigned long long onboardStatus;
@property (retain, nonatomic) PXPeopleProgressManager *progressManager;
@property (retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateNavigationBar;
- (void)viewDidLoad;
- (id)px_navigationDestination;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_emptyPlaceholderTextAttributesFromTextProperties:(id)a0;
- (void)_progressChanged:(id)a0;
- (void)_pushToPeopleHome;
- (id)_sharedLibraryEmptyPeopleAlbumMessage;
- (id)_sharedLibraryEmptyPeopleAlbumTitle;
- (id)_textAttachmentImageForSystemImageNamed:(id)a0;
- (void)_updateStatusViewForStatus:(unsigned long long)a0;
- (void)_updateStatusViewSharedLibrary;
- (id)initWithDataSource:(id)a0 progressManager:(id)a1;

@end
