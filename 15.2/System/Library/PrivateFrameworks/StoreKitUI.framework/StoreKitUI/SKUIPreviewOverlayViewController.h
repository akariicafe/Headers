@class UITapGestureRecognizer, NSString, SKUIViewElementLayoutContext, SKUILayoutCache, IKAppDocument, SKUIHorizontalLockupView, SUPlayerStatus;

@interface SKUIPreviewOverlayViewController : SKUIViewController <SKUIItemStateCenterObserver, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate> {
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_tapAction:(id)a0;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)documentDidUpdate:(id)a0;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)prepareOverlayView;
- (void)showPreviewProgressWithStatus:(id)a0 animated:(BOOL)a1;
- (id)_layoutCache;
- (double)_overlayWidth;
- (void)reloadOverlayView;

@end
