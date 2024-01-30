@class UIView, IKViewElement, VUISportsScoreboardViewModel, UIImage, VUITextBadgeView, NSOperationQueue, VUIScorecardView, IKImageElement, VUISportsOverlayLayout, UICollectionReusableView, NSString, NSOperation;

@interface VUISportsOverlayView : UIView <VUIScorecardViewDelegate, VUIOverlayWithMaterialRendering, VUISportsScoreboardManagerDelegate>

@property (class, readonly, nonatomic) NSOperationQueue *_sharedDrawQueue;

@property (retain, nonatomic) VUISportsScoreboardViewModel *scoreboardViewModel;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic) BOOL textBadgeHasMaterial;
@property (retain, nonatomic) IKImageElement *logoElement;
@property (nonatomic) struct CGSize { double width; double height; } logoSize;
@property (retain, nonatomic) NSOperation *pendingOperation;
@property (retain, nonatomic) UIImage *scorecardViewBackgroundImage;
@property (nonatomic) BOOL backgroundImageHasChanged;
@property (weak, nonatomic) UICollectionReusableView *containingCell;
@property (nonatomic) BOOL isHostSetup;
@property (retain, nonatomic) UIImage *backgroundImageForMaterialRendering;
@property (retain, nonatomic) VUISportsOverlayLayout *overlayLayout;
@property (retain, nonatomic) VUIScorecardView *scorecardView;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) UIView *logoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentBackgroundImage:(id)a1;
+ (id)sportsOverlayViewFromElement:(id)a0 overlayLayout:(id)a1 existingView:(id)a2;
+ (id)sharedDrawQueue;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_updateTextBadge:(id)a0;
- (BOOL)updateScoreView:(id)a0;
- (void)updateBackgroundMaterialImagesWithBackgroundImageSize:(struct CGSize { double x0; double x1; })a0 performSynchronously:(BOOL)a1;
- (void)_setupHosting;
- (void)_updateBadgePosition;
- (void)registerOverlayView;
- (void)_teardownHosting;
- (void)unregisterOverlayView;
- (void)_cancelPendingOperation;
- (BOOL)_scorecardViewBackgroundImageNeedsUpdating;
- (void)_redrawScorecardViewWithDuration:(double)a0;
- (BOOL)_textBadgeBackgroundImageNeedsUpdating;
- (void)_redrawTextBadgeWithDuration:(double)a0;
- (void)_updateBackgroundImagesWithCompletedOperation:(id)a0;
- (BOOL)updateTextBadge;
- (BOOL)_scorecardViewRequiresBackgroundImage;
- (BOOL)_textBadgeRequiresBackgroundImage;
- (void)_redrawView:(id)a0 withDuration:(double)a1;
- (long long)styleForScorecardView:(id)a0;
- (long long)numberOfRowsInScorecardView:(id)a0;
- (long long)numberOfScoreValuesForScorecardView:(id)a0 inRow:(long long)a1;
- (id)scoreValue:(id)a0 inRow:(long long)a1 atIndex:(long long)a2;
- (double)maximumWidthForScorecardView:(id)a0;
- (id)backgroundImageForScorecardViewMaterial:(id)a0;
- (int)backgroundBlendModeForScoreValueInRow:(long long)a0 atIndex:(long long)a1;
- (void)backgroundImageSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)updateScoreboard:(id)a0;
- (id)getJSContextDictionary;

@end
