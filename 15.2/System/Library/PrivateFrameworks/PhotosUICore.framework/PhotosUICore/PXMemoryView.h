@class PXMemoryViewModel, NSString, PXDisplayAssetUIView, UIView, PXTitleSubtitleUILabel;
@protocol PXMemoryViewPresentationDelegate;

@interface PXMemoryView : UIView <PXChangeObserver, PXUIViewControllerTransitionEndPoint> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXTitleSubtitleUILabel *titleSubtitleLabel;
@property (retain, nonatomic) PXDisplayAssetUIView *displayAssetView;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) UIView *highlightView;
@property (retain, nonatomic) PXMemoryViewModel *viewModel;
@property (weak, nonatomic) id<PXMemoryViewPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;

- (void)layoutSubviews;
- (void)_didTap:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_updateSpecIfNeeded;
- (void)_updateTitleSubtitleIfNeeded;
- (void)_updateKeyAssetIfNeeded;
- (void)_updateHighlightedIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 applyToSubviews:(BOOL)a1;

@end
