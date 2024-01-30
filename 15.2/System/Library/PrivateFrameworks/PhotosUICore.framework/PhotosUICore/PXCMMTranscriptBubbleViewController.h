@class NSURL, PHMomentShare, PXCMMStackBubbleView, PHFetchResult, PXMomentShareStatusPresentation, NSString, PXCMMPreviewAsset, PHPhotoLibrary, PXCMMTranscriptBubbleStatusView, PXCMMPreviewUIImageProvider, PXCMMTranscriptBubbleView, NSError, PXCMMSpecManager;
@protocol PXUIImageProvider, PXCMMTranscriptBubbleTouchDelegate;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate> {
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PHFetchResult *_keyAssetFetch;
    long long _saveInProgressTotal;
    PXCMMTranscriptBubbleView *_bubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    id<PXUIImageProvider> _mediaProvider;
    PXCMMSpecManager *_specManager;
    PXCMMPreviewAsset *_previewAsset;
    PXCMMPreviewUIImageProvider *_previewImageProvider;
    BOOL _readyForBubbleStateTransitions;
    BOOL _isExpungingAndRefetching;
    BOOL _triggeredForcedSync;
    BOOL _useStackBubbleView;
    PXCMMStackBubbleView *_stackBubbleView;
}

@property (nonatomic) long long bubbleState;
@property (nonatomic) long long targetState;
@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isSender;
@property (readonly, nonatomic) BOOL isPending;
@property (weak, nonatomic) id<PXCMMTranscriptBubbleTouchDelegate> touchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_registerPermanentFailureURL:(id)a0;
+ (BOOL)_isPermanentFailureURL:(id)a0;

- (void)viewDidLoad;
- (void)_updateContent;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_panGesture:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_shouldShowContent;
- (void)_tapGesture:(id)a0;
- (struct CGSize { double x0; double x1; })workaroundSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)a0;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)a0;
- (id)initWithURL:(id)a0 isSender:(BOOL)a1 isPending:(BOOL)a2;
- (id)_primaryDescription;
- (id)_secondaryDescription;
- (id)_debugStatusDescription;
- (BOOL)_canFetchAssetsFromMomentShare:(id)a0;
- (id)_fetchKeyAssetsFromBackingCollection;
- (void)_fetchMomentShareFromNetworkURL:(id)a0;
- (void)_momentShareURL:(id)a0 fetchDidFailWithError:(id)a1;
- (void)_autoAcceptMomentShareIfNeeded:(id)a0;
- (void)_acceptMomentShareIfNeeded:(id)a0;
- (void)_triggerForcedSyncIfNeeded;
- (void)_retryMomentShareFetch;
- (BOOL)_shouldNavigateToContent;
- (BOOL)_shouldRetryOnTap;
- (BOOL)_shouldOpenInSafari;
- (BOOL)_shouldOpenCloudSettings;
- (void)_doubleTapGesture:(id)a0;
- (void)_longPressGesture:(id)a0;
- (void)_installGestures;
- (void)_updateBubbleView;
- (void)_updateMomentShareStatusPresentation;
- (void)_updateBubbleState;
- (void)_ensureBubbleStateTransition;
- (void)_readyForStateTransition;

@end
