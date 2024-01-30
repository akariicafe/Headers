@class HURecordingEventCellFamiliarFacesView, HUClipScrubberTimeController, CALayer, UIView, HMCameraClip;

@interface HUCameraEventRecordingCell : UICollectionViewCell <HFCameraImageObserver>

@property (nonatomic) unsigned long long displayMode;
@property (weak, nonatomic) HMCameraClip *recordingEvent;
@property (retain, nonatomic) CALayer *badgeLayer;
@property (retain, nonatomic) UIView *posterFramesContainerView;
@property (retain, nonatomic) UIView *dayBoundaryView;
@property (nonatomic) BOOL portraitMode;
@property (weak, nonatomic) HUClipScrubberTimeController *timeController;
@property (retain, nonatomic) HURecordingEventCellFamiliarFacesView *familiarFacesView;
@property (nonatomic) BOOL hasFamiliarFaces;

+ (id)backgroundColor;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_badgeImageForSignificantEventReasons:(id)a0;
- (void)addPosterFrameViews;
- (void)synchronizeLoadingIndicators;
- (void)addDayBoundaryIfNeeded;
- (void)drawEventMarkers;
- (void)updateFamiliarFaces;
- (unsigned long long)numberOfFramesNeeded;
- (void)_updateBadgeLayerWithImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateBadgeLayerWithEvents:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)displayReachabilityErrorUI;
- (void)preparePosterFrameViewsForReuse;
- (id)_accessibilityStringForSignificantEvents;
- (void)updateWithCameraClipEvent:(id)a0 mode:(unsigned long long)a1 portraitMode:(BOOL)a2 timeController:(id)a3;
- (void)showFamiliarFacesWithMaxWidth:(double)a0;
- (void)hideFamiliarFaces;

@end
