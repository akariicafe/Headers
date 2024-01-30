@class PXAssetsDataSourceCountsController, NSString, NSArray, PXCPLUIStatusProvider, PXFooterSettings, PXCuratedLibraryViewModel, PXContentFilterFooterController, PXCuratedLibraryAnalysisStatus, PXCloudQuotaController;
@protocol PXCuratedLibraryFooterViewModelPresentationDelegate;

@interface PXCuratedLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerDelegate, PXChangeObserver, PXSettingsKeyObserver> {
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCuratedLibraryViewModel *_curatedLibraryViewModel;
    PXContentFilterFooterController *_filterFooterController;
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
@property (readonly, nonatomic) PXCloudQuotaController *cloudQuotaController;
@property (readonly, nonatomic) PXCuratedLibraryAnalysisStatus *analysisStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasCPLStatusForCPLUIStatus:(id)a0;
+ (id)_titleWithOptionalDescription:(id *)a0 progress:(float *)a1 forMode:(long long)a2 itemCountsController:(id)a3 analysisStatus:(id)a4 cplUIStatus:(id)a5 inRebuild:(BOOL)a6;
+ (BOOL)hasAnalysisProgressForMode:(long long)a0 analysisStatus:(id)a1 cplUIStatus:(id)a2 userDefaults:(id)a3 outAnimatedIconMode:(long long *)a4 outProgress:(float *)a5 outTitle:(id *)a6 outDescription:(id *)a7;

- (void)cloudQuotaController:(id)a0 informationBannerDidChange:(id)a1;
- (void)_updateExposedProperties;
- (void)footerAnimationCrossedGridCycleBoundary;
- (id)init;
- (void).cxx_destruct;
- (id)presentingViewControllerForCloudQuotaController:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithItemCountsController:(id)a0 cplUIStatusProvider:(id)a1 analysisStatus:(id)a2 mode:(long long)a3 viewModel:(id)a4;
- (void)didHideFooter;
- (void)setHasImportantInformation:(BOOL)a0;
- (void)didShowFooter;
- (void)_updateHasImportantInformation;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
