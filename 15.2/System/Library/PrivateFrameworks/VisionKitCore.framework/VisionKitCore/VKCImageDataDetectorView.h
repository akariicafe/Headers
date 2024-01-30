@class NSArray, NSMutableSet, NSString;
@protocol VKCImageDataDetectorViewDelegate;

@interface VKCImageDataDetectorView : VKCImageBaseOverlayView <VKCDataDetectorElementViewDelegate, VKCMRCHighlightViewDelegate>

@property (retain, nonatomic) NSArray *allElements;
@property (retain, nonatomic) NSArray *unfilteredElements;
@property (retain, nonatomic) NSArray *displayedElements;
@property (retain, nonatomic) NSMutableSet *displayedElementViews;
@property (retain, nonatomic) NSMutableSet *displayedMRCPills;
@property (readonly, nonatomic) BOOL needsElementFrameUpdate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsUsedToCalculateElementFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRectUsedToCalculateElementFrames;
@property (weak, nonatomic) id<VKCImageDataDetectorViewDelegate> delegate;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL allowLongPressDDActivationOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setRecognitionResult:(id)a0;
- (void)setHighlightSelectableItems:(BOOL)a0 animated:(BOOL)a1;
- (void)setCustomAnalyticsIdentifier:(id)a0;
- (id)previewForDataDetectorElementView:(id)a0;
- (BOOL)dataDetectorElementView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)dataDetectorElementView:(id)a0 analyticsEventOccured:(id)a1;
- (id)presentingViewControllerForInteractionWithDataDetectorElementView:(id)a0;
- (void)willDisplayMenuForDataDetectorElementView:(id)a0;
- (void)willDismissMenuForDataDetectorElementView:(id)a0;
- (void)activateLongPressDataDetectorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateDisplayedElements;
- (void)updateAllElementViewFramesIfNecessary;
- (void)loadDataDetectorViewsFromDisplayedElements;
- (BOOL)shouldFilterElementForSpecialCase:(id)a0;
- (void)updateAllElementViewFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDataDetectorElement:(id)a0;
- (id)currentViewSpaceQaudForHighlightView:(id)a0;
- (BOOL)highlightView:(id)a0 needsToAdjustQuad:(id)a1;
- (id)viewSpaceQuadsForDataDetectorElement:(id)a0;
- (void)showMRCPills:(BOOL)a0 animated:(BOOL)a1;

@end
