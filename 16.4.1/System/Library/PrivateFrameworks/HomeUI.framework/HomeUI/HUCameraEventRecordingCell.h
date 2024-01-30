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

- (id)accessibilityLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)preparePosterFrameViewsForReuse;
- (id)_badgeImageForSignificantEventReasons:(id)a0;
- (void)_updateBadgeLayerWithImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addDayBoundaryIfNeeded;
- (void)addPosterFrameViews;
- (void)displayReachabilityErrorUI;
- (void)drawEventMarkers;
- (void)hideFamiliarFaces;
- (unsigned long long)numberOfFramesNeeded;
- (void)showFamiliarFacesWithMaxWidth:(double)a0;
- (void)updateBadgeLayerWithEvents:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateFamiliarFaces;
- (void)updateWithCameraClipEvent:(id)a0 mode:(unsigned long long)a1 portraitMode:(BOOL)a2 timeController:(id)a3;

@end
