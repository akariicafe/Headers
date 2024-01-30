@class NSError, NSString, NSURL, PXCMMTranscriptBubbleStatusView, PXCMMStackBubbleView, PHPhotoLibrary, PHFetchResult, PHMomentShare, PXCMMSpecManager;
@protocol PXCMMTranscriptBubbleTouchDelegate;

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PXCMMStackBubbleView *_stackBubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    PXCMMSpecManager *_specManager;
    BOOL _readyForBubbleStateTransitions;
    BOOL _isExpungingAndRefetching;
    BOOL _triggeredForcedSync;
}

@property (nonatomic) long long bubbleState;
@property (nonatomic) long long targetState;
@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isSender;
@property (weak, nonatomic) id<PXCMMTranscriptBubbleTouchDelegate> touchDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isPermanentFailureURL:(id)a0;
+ (void)_registerPermanentFailureURL:(id)a0;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateContent;
- (void)_tapGesture:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (BOOL)_shouldShowContent;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_autoAcceptMomentShareIfNeeded:(id)a0;
- (void)_acceptMomentShareIfNeeded:(id)a0;
- (void)_ensureBubbleStateTransition;
- (void)_fetchMomentShareFromNetworkURL:(id)a0;
- (void)_momentShareURL:(id)a0 fetchDidFailWithError:(id)a1;
- (void)_readyForStateTransition;
- (void)_retryMomentShareFetch;
- (BOOL)_shouldNavigateToContent;
- (BOOL)_shouldOpenCloudSettings;
- (BOOL)_shouldOpenInSafari;
- (BOOL)_shouldRetryOnTap;
- (void)_triggerForcedSyncIfNeeded;
- (void)_updateBubbleState;
- (void)_updateBubbleView;
- (id)initWithURL:(id)a0 isSender:(BOOL)a1;
- (struct CGSize { double x0; double x1; })workaroundSizeForSize:(struct CGSize { double x0; double x1; })a0;

@end
