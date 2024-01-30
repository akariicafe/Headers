@class UIView, NSString, ContinuousReadingPreviewView, ContinuousReadingItem, _SFWebView, ContinuousReadingBannerView, SFBannerTheme, UIScrollView;
@protocol ContinuousReadingViewControllerDelegate;

@interface ContinuousReadingViewController : NSObject <UIScrollViewDelegate> {
    SFBannerTheme *_bannerTheme;
}

@property (retain, nonatomic, getter=_outerScrollView, setter=_setOuterScrollView:) UIScrollView *outerScrollView;
@property (readonly, retain, nonatomic) UIView *view;
@property (retain, nonatomic) ContinuousReadingPreviewView *previousItemPreviewView;
@property (retain, nonatomic) ContinuousReadingPreviewView *previewView;
@property (readonly, nonatomic) ContinuousReadingBannerView *topBannerView;
@property (retain, nonatomic) ContinuousReadingItem *currentItem;
@property (weak, nonatomic) _SFWebView *currentWebView;
@property (nonatomic, getter=isSuppressingAutoScroll) BOOL suppressingAutoScroll;
@property (readonly, nonatomic, getter=isCommittingToContinuousDocument) BOOL committingToContinuousDocument;
@property (readonly, nonatomic, getter=isScrollingToNextContinuousDocument) BOOL scrollingToNextContinuousDocument;
@property (readonly, nonatomic, getter=isUserInteractingWithContainer) BOOL userInteractingWithContainer;
@property (readonly, nonatomic) double scrollOffsetYForCurrentDocument;
@property (weak, nonatomic) id<ContinuousReadingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didCreateWebViewForNextDocument:(id)a0;
- (void)_willCommitToContinuousDocumentInPreviewView:(id)a0;
- (double)_scrollOffsetYForPreviousDocument;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_commitToPreviousContinuousDocument;
- (void)loadNextItem;
- (void)innerScrollViewDidScroll:(id)a0;
- (void)setBannerTheme:(id)a0 animated:(BOOL)a1;
- (void)updateContinuousPreviewViewSizeAttributes;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)didCreateWebViewForPreviousDocument:(id)a0;
- (void)loadPreviousItem;
- (double)_scrollOffsetYForNextDocument;
- (void)_commitToNextContinuousDocument;
- (void)updateOuterScrollView;

@end
