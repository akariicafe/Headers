@class SHToggleManager, NSString, CCUIContentModuleContext, NSDiffableDataSourceSnapshot, SHMediaLibrary, SHLibraryContentView, SHAppClip;

@interface SHShazamModuleViewController : CCUIMenuModuleViewController <SHToggleManagerDelegate, SHMediaLibrarySyncDelegate, SHLibraryContentViewDelegate, SHAppClipDelegate> {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) SHMediaLibrary *library;
@property (retain, nonatomic) SHToggleManager *toggleManager;
@property (retain, nonatomic) SHAppClip *appClip;
@property (retain, nonatomic) SHLibraryContentView *libraryContentView;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *diffableSnapshot;
@property (nonatomic) BOOL selectedOnExpansion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)refreshState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setContentModuleContext:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setupContentView;
- (double)preferredContentHeight;
- (void)refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)tearDownContentView;
- (void)setModuleStateToBusy:(BOOL)a0;
- (void)updateDataSourceWithSnapshot:(id)a0;
- (void)updateStatusMessage;
- (struct CGSize { double x0; double x1; })preferredExpandedContentSize;
- (void)loadLibraryContent;
- (void)toggleManager:(id)a0 didToggleToState:(long long)a1;
- (void)_libraryWillBeginSync:(id)a0;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)contentViewShouldPresentAccountUpgradeFlow;
- (void)contentView:(id)a0 didSelectTrack:(id)a1;
- (void)contentView:(id)a0 didDeleteTrack:(id)a1;
- (void)appClip:(id)a0 didFailToRequestURL:(id)a1 error:(id)a2;

@end
