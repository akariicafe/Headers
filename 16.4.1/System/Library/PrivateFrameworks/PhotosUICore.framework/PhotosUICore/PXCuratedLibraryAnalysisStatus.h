@class PXCuratedLibraryAssetsDataSourceManager, NSString, NSTimer;
@protocol PXCuratedLibraryEventTracker;

@interface PXCuratedLibraryAnalysisStatus : PXObservable <PXMutableCuratedLibraryAnalysisStatus> {
    long long _numberOfRequestsToCycleThroughAlternateTitles;
    NSTimer *_alternateTitleTimer;
}

@property (readonly, nonatomic) long long alternateTitleIndex;
@property (readonly, nonatomic) BOOL hasBattery;
@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) id<PXCuratedLibraryEventTracker> eventTracker;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) float displayProgress;
@property (readonly, nonatomic) BOOL isDaysMonthsYearsStructureEnabled;
@property (readonly, nonatomic) BOOL isDevicePlugged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProgress:(float)a0;
- (void)setLocalizedDescription:(id)a0;
- (void)setLocalizedTitle:(id)a0;
- (void)didPerformChanges;
- (id)initWithDataSourceManager:(id)a0;
- (void)dealloc;
- (void)alternateTitleIndexDidChange;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)_handleAlternateTitleTimer:(id)a0;
- (id)_initWithDataSourceManager:(id)a0;
- (void)_updateEventsTracking;
- (void)cycleToNextAlternateTitle;
- (void)setDisplayProgress:(float)a0;
- (void)setIsDaysMonthsYearsStructureEnabled:(BOOL)a0;
- (void)setIsDevicePlugged:(BOOL)a0;
- (void)startCyclingThroughAlternateTitles;
- (void)stopCyclingThroughAlternateTitles;

@end
