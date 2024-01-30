@class NSString, KNShow, KNRecordingSyncMaintainer;
@protocol KNDocumentRootDelegate;

@interface KNDocumentRoot : TSADocumentRoot <TSWPDrawableOLC, TSKModel, TSTResolverContainerNameProvider> {
    BOOL _isObservingRecording;
}

@property (retain, nonatomic) KNRecordingSyncMaintainer *recordingSyncMaintainer;
@property (weak, nonatomic) id<KNDocumentRootDelegate> delegate;
@property (retain, nonatomic) KNShow *show;
@property (readonly, nonatomic) BOOL isShowcastAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)localizeModelObject:(id)a0 withTemplateBundle:(id)a1 andLocale:(id)a2;

- (id)theme;
- (id)initWithContext:(id)a0;
- (unsigned long long)applicationType;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isSharedReadOnly;
- (id)childEnumerator;
- (void)setDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setTheme:(id)a0;
- (id)stylesheet;
- (void)documentDidLoad;
- (void)setThemeForTemplateImport:(id)a0;
- (BOOL)isMultiPageForQuickLook;
- (id)protected_defaultTextPresetOrdering;
- (void)willClose;
- (void)prepareForSavingAsTemplate;
- (void)loadFromArchive:(const struct DocumentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct DocumentArchive *x5; struct Reference *x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct DocumentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct DocumentArchive *x5; struct Reference *x6; } *)a0 archiver:(id)a1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)a0;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (id)freehandDrawingToolkitUIState;
- (void)setUiState:(id)a0;
- (id)nameForResolverContainer:(id)a0;
- (id)resolverContainerNameForResolver:(id)a0;
- (id)resolverMatchingName:(id)a0 contextContainerName:(id)a1;
- (id)resolverContainerForName:(id)a0 caseSensitive:(BOOL)a1;
- (id)resolversMatchingPrefix:(id)a0;
- (void)setDocumentLocale:(id)a0;
- (id)UIStateForChart:(id)a0;
- (void)setUIState:(id)a0 forChart:(id)a1;
- (id)resolverContainerNamesMatchingPrefix:(id)a0;
- (id)resolverMatchingName:(id)a0 contextResolver:(id)a1;
- (BOOL)shouldShowFloatingCommentInfo:(id)a0;
- (double)stickyCommentScaleMultiplier;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)a0 andMasterSlideNodess:(id)a1;
- (id)knDelegate;
- (id)createViewStateRootForContinuation:(BOOL)a0;
- (id)stylesToNotResizeInStylesheet:(id)a0;
- (id)slideNodeForClearedShow;
- (void)changeShowSizeTo:(struct CGSize { double x0; double x1; })a0;
- (void)changeShowThemeUsingTemplate:(id)a0 themeDocumentRoot:(id)a1 toSize:(struct CGSize { double x0; double x1; })a2 keepChangesToThemeDefaults:(BOOL)a3 commandGroupActionStringOverride:(id)a4;
- (id)warningLocationDescriptionForAffectedObjects:(id)a0 sortingInfo:(id *)a1;
- (long long)compareLocationSortingInfo:(id)a0 toSortingInfo:(id)a1;
- (void)preprocessForSaveAsTheme;
- (BOOL)validateUIState:(id)a0;
- (unsigned long long)writingDirectionForStorage;
- (BOOL)validateSlideNode:(id)a0;
- (void)p_applicationWillResignActive:(id)a0;
- (void)p_applicationDidBecomeActive:(id)a0;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
