@class PBUIColorStatistics, NSString, PBUIGradientView, MTMaterialView, PRPosterHomeScreenConfiguration, PBUIEffectTrackingReplicaView;

@interface PBUIPosterHomeViewController : PBUIPosterVariantViewController <PBUIEffectTrackingReplicaViewDelegate> {
    long long _currentMode;
    PRPosterHomeScreenConfiguration *_homeConfiguration;
    PBUIEffectTrackingReplicaView *_effectView;
    PBUIGradientView *_gradientView;
    PBUIColorStatistics *_fixedColorStatistics;
    MTMaterialView *_wallpaperCaptureView;
}

@property (readonly, nonatomic) BOOL isBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)presentationModeForHomeConfiguration:(id)a0;

- (double)unlockProgress;
- (id)averageColor;
- (void)setFixedAverageColor:(id)a0;
- (BOOL)updatePresentation;
- (BOOL)canShowSnapshot;
- (BOOL)reflectsLock;
- (void)setCounterpart:(id)a0;
- (BOOL)isSettledPosition;
- (void)effectTrackingReplicaViewHasValidSnapshot:(id)a0;
- (void)configureEffectViewForMode;
- (id)contentColorStatistics;
- (void)performSnapshotOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (double)weightingForEffectView;
- (BOOL)areSettingsAppropriateForSnapshotting:(id)a0;
- (long long)variant;
- (double)averageContrast;
- (BOOL)showsSnapshotWhenIdleForMode:(long long)a0;
- (BOOL)updateGradientViewWithGradient:(id)a0;
- (id)homeScreenConfiguration;
- (BOOL)evaluateSnapshotPreconditions;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
