@class NSString, NSArray, PXCPLUIStatusProvider, PXFooterSettings, PXCuratedLibraryViewModel, PXFilterFooterController, PXCloudQuotaControllerHelper, PXCuratedLibraryAnalysisStatus, PXAssetsDataSourceCountsController;
@protocol PXCuratedLibraryFooterViewModelPresentationDelegate;

@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerHelperDelegate, PXChangeObserver, PXSettingsKeyObserver> {
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXCuratedLibraryViewModel *_curatedLibraryViewModel;
    PXFilterFooterController *_filterFooterController;
    long long _animatedGridCycleIndex;
}

@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController;
@property (readonly, nonatomic) NSArray *syncProgressAlbums;
@property (readonly, nonatomic) PXFooterSettings *settings;
@property (nonatomic) BOOL isFooterShown;
@property (readonly, nonatomic) BOOL shouldAlternateTitleWithAnimatedGridCycle;
@property (weak, nonatomic) id<PXCuratedLibraryFooterViewModelPresentationDelegate> presentingDelegate;
@property (nonatomic) long long mode;
@property (readonly, nonatomic) BOOL hasImportantInformation;
@property (readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnalysisProgressForMode:(long long)a0 analysisStatus:(id)a1 cplUIStatus:(id)a2 userDefaults:(id)a3 outAnimatedIconMode:(long long *)a4 outProgress:(float *)a5 outTitle:(id *)a6 outDescription:(id *)a7;
+ (id)_titleWithOptionalDescription:(id *)a0 progress:(float *)a1 forMode:(long long)a2 itemCountsController:(id)a3 analysisStatus:(id)a4 cplUIStatus:(id)a5 inRebuild:(BOOL)a6;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)setHasImportantInformation:(BOOL)a0;
- (void)_updateExposedProperties;
- (void)footerAnimationCrossedGridCycleBoundary;
- (void)didHideFooter;
- (void)_updateHasImportantInformation;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)initWithItemCountsController:(id)a0 cplUIStatusProvider:(id)a1 analysisStatus:(id)a2 mode:(long long)a3 viewModel:(id)a4;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;
- (void)didShowFooter;

@end
