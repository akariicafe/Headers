@class PXMemoryViewModel, NSString, UIView, PXDisplayAssetContentView, PXTitleSubtitleUILabel;
@protocol PXMemoryViewPresentationDelegate;

@interface PXMemoryView : UIView <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXTitleSubtitleUILabel *titleSubtitleLabel;
@property (retain, nonatomic) PXDisplayAssetContentView *displayAssetView;
@property (readonly, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) UIView *highlightView;
@property (retain, nonatomic) PXMemoryViewModel *viewModel;
@property (weak, nonatomic) id<PXMemoryViewPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didTap:(id)a0;
- (void)_updateIfNeeded;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 applyToSubviews:(BOOL)a1;
- (void)_updateHighlightedIfNeeded;
- (void)_updateKeyAssetIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTitleSubtitleIfNeeded;

@end
