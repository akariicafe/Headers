@class SHToggleManager, NSString, CCUIContentModuleContext, SHMediaLibrary, SHLibraryContentView;

@interface SHShazamModuleViewController : CCUIMenuModuleViewController <SHToggleManagerDelegate, SHMediaLibrarySyncDelegate, SHLibraryContentViewDelegate> {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) SHMediaLibrary *library;
@property (retain, nonatomic) SHToggleManager *toggleManager;
@property (retain, nonatomic) SHLibraryContentView *libraryContentView;
@property (nonatomic) BOOL selectedOnExpansion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDeviceUnlocked;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)setContentModuleContext:(id)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void).cxx_destruct;
- (void)refreshState;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateSnapshot;
- (void)setupContentView;
- (double)preferredContentHeight;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryWillBeginSync:(id)a0;
- (void)requestAuthenticationIfLockedWithCompletionHandler:(id /* block */)a0;
- (void)toggleManager:(id)a0 didToggleToState:(long long)a1;
- (void)contentView:(id)a0 didDeleteTrack:(id)a1;
- (void)contentView:(id)a0 didSelectTrack:(id)a1;
- (void)contentViewShouldPresentAccountUpgradeFlow;
- (void)loadLibraryContent;
- (void)openFallbackShazamURL:(id)a0;
- (struct CGSize { double x0; double x1; })preferredExpandedContentSize;
- (void)refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)setModuleStateToBusy:(BOOL)a0;
- (void)tearDownContentView;
- (void)updateStatusMessage;

@end
