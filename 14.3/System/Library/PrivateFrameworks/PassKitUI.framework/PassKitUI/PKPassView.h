@class PKPass, NSString, PKPassFaceViewRendererState, UITapGestureRecognizer, PKPasscodeLockManager, PKPassColorProfile, PKPassFrontFaceView, NSObject, NSMutableArray;
@protocol OS_dispatch_source, WLCardViewDelegate;

@interface PKPassView : UIView <UIGestureRecognizerDelegate, PKPassFaceViewDelegate, PKPasscodeLockManagerObserver> {
    PKPassFrontFaceView *_frontFace;
    PKPassColorProfile *_colorProfile;
    PKPassFaceViewRendererState *_rendererState;
    UITapGestureRecognizer *_tapRecognizer;
    long long _priorContentMode;
    PKPasscodeLockManager *_passcodeLockManager;
    NSString *_suppressingIdentifier;
    BOOL _contentLoading;
    BOOL _contentLoaded;
    NSObject<OS_dispatch_source> *_contentModeUpdateTimer;
    NSMutableArray *_delayedAnimations;
    BOOL _invalidated;
}

@property (readonly, retain, nonatomic) PKPass *pass;
@property (readonly, nonatomic) NSString *uniqueID;
@property (weak, nonatomic) id<WLCardViewDelegate> delegate;
@property (nonatomic) long long contentMode;
@property (nonatomic) unsigned long long suppressedContent;
@property (nonatomic, getter=isModallyPresented) BOOL modallyPresented;
@property (nonatomic) double modalShadowVisibility;
@property (readonly, nonatomic) BOOL frontFaceBodyContentCreated;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (readonly, nonatomic) BOOL isFrontFaceExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)item;
- (void).cxx_destruct;
- (void)dealloc;
- (void)passcodeLockManager:(id)a0 didReceivePasscodeSet:(BOOL)a1;
- (void)didAuthenticate;
- (id)initWithPass:(id)a0 content:(long long)a1 suppressedContent:(unsigned long long)a2;
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)tapRecognized:(id)a0;
- (void)layoutSubviews;
- (id)initWithPass:(id)a0 content:(long long)a1;
- (id)snapshotOfFrontFace;
- (void)setDimmer:(double)a0 animated:(BOOL)a1;
- (void)presentDiff:(id)a0 completion:(id /* block */)a1;
- (void)didTransact;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeOfFront;
- (id)initWithPass:(id)a0 content:(long long)a1 suppressedContent:(unsigned long long)a2 rendererState:(id)a3;
- (void)_updateFrontFaceSuppressedContent;
- (void)_applyContentMode:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfVisibleFace;
- (void)setModalShadowVisibility:(double)a0 animated:(BOOL)a1;
- (void)setModalShadowVisibility:(double)a0 animated:(BOOL)a1 withDelay:(double)a2;
- (void)_updateLayerShadowAnimated:(BOOL)a0 withDelay:(double)a1;
- (void)setContentMode:(long long)a0 animated:(BOOL)a1;
- (void)setContentMode:(long long)a0 animated:(BOOL)a1 withDelay:(double)a2;
- (void)_updateLowEndLayerShadowAnimated:(BOOL)a0 withDelay:(double)a1;
- (void)_updateHighEndLayerShadowAnimated:(BOOL)a0 withDelay:(double)a1;
- (long long)_frontFaceBackgroundModeForContentMode;
- (unsigned long long)_regionsForCurrentModes;
- (BOOL)_visibleFaceShouldClipForCurrentViewMode:(double *)a0;
- (void)passFaceViewExpandButtonTapped:(id)a0;
- (void)setPaymentBarcodeData:(id)a0;
- (struct CGSize { double x0; double x1; })sizeOfFrontFace;
- (void)drawFrontFaceAtSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canShowBarcode;
- (void)setFrontFaceExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)updateValidityDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;
- (id)initWithPass:(id)a0;

@end
