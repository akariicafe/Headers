@class CAMPanoramaPaintingStatus, CAMPanoramaLabel, NSString, CAMPanoramaPreviewView, UIView, CAMPanoramaLevelView, CAMPanoramaArrowView;
@protocol CAMPanoramaViewDelegate;

@interface CAMPanoramaView : UIView

@property (readonly, nonatomic) UIView *_stripBackgroundView;
@property (readonly, nonatomic) UIView *_stripContainerView;
@property (readonly, nonatomic) UIView *_maskingView;
@property (readonly, nonatomic) CAMPanoramaArrowView *_arrowView;
@property (readonly, nonatomic) CAMPanoramaLevelView *_levelView;
@property (readonly, nonatomic) CAMPanoramaLabel *_instructionLabel;
@property (readonly, copy, nonatomic) NSString *_speedString;
@property (readonly, copy, nonatomic) NSString *_moveUpString;
@property (readonly, copy, nonatomic) NSString *_moveDownString;
@property (readonly, copy, nonatomic) NSString *_arrowString;
@property (readonly, copy, nonatomic) NSString *_instructionString;
@property (nonatomic, setter=_setInitialArrowCenter:) struct CGPoint { double x; double y; } _initialArrowCenter;
@property (nonatomic, setter=_setLastLayoutBounds:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutBounds;
@property (nonatomic, getter=isPainting, setter=_setPainting:) BOOL painting;
@property (retain, nonatomic, setter=_setCurrentPaintingStatus:) CAMPanoramaPaintingStatus *_currentPaintingStatus;
@property (nonatomic, setter=_setFilteredNormalizedBaselineOffset:) double _filteredNormalizedBaselineOffset;
@property (nonatomic, getter=_isCurrentlyShowingMoveInstructions, setter=_setCurrentlyShowingMoveInstructions:) BOOL _currentlyShowingMoveInstructions;
@property (readonly, nonatomic) double *_previousSpeeds;
@property (nonatomic, getter=_isCurrentlyMovingTooFast, setter=_setCurrentlyMovingTooFast:) BOOL _currentlyMovingTooFast;
@property (nonatomic, setter=_setCurrentAverageSpeed:) double _currentAverageSpeed;
@property (nonatomic, setter=_setArrowUpdateFrame:) unsigned long long _arrowUpdateFrame;
@property (nonatomic) long long direction;
@property (weak, nonatomic) id<CAMPanoramaViewDelegate> delegate;
@property (readonly, nonatomic) CAMPanoramaPreviewView *previewView;
@property (readonly, nonatomic) UIView *instructionView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct CGSize { double width; double height; } panoramaCaptureSize;

+ (Class)layerClass;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_cancelDelayedMoveInstructions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForArrowViewWithDirection:(long long)a0 offset:(double)a1;
- (void)_hideArrowInstructionsAfterDelay;
- (void)_hideInstructionLabel;
- (void)_hideSpeedInstructionsAfterDelay;
- (struct CGSize { double x0; double x1; })_previewSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetPaintingUIAnimated:(BOOL)a0;
- (void)_showArrowInstructions;
- (void)_showMoveDownInstructions;
- (void)_showMoveDownInstructionsAfterDelay;
- (void)_showMoveUpInstructions;
- (void)_showMoveUpInstructionsAfterDelay;
- (void)_showSpeedInstructions;
- (void)_updateInstructionLabelForInstruction:(long long)a0;
- (void)finishedProcessingPanorama;
- (id)initWithPanoramaPreviewView:(id)a0 layoutStyle:(long long)a1;
- (void)setDirection:(long long)a0 animated:(BOOL)a1;
- (void)startPainting;
- (void)startProcessingPanorama;
- (void)stopPainting;
- (void)updatePaintingWithStatus:(id)a0;

@end
