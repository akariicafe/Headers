@class UIView, NSString, PXFooterAnimatedIconView, PXFooterViewModel, PXGradientView, UITextView, UILabel, UIProgressView;
@protocol PXPhotosGlobalFooterViewDelegate, PXPhotosGlobalFooterViewLayoutDelegate;

@interface PXPhotosGlobalFooterView : UICollectionReusableView <UITextViewDelegate, PXChangeObserver> {
    UIView *_accessoryView;
    UIView *_filterView;
    BOOL _hasAnimatedIconView;
    PXFooterAnimatedIconView *_animatedIconView;
    PXGradientView *_backgroundView;
    UILabel *_titleLabel;
    UITextView *_subtitle1TextView;
    UILabel *_subtitle2Label;
    UIProgressView *_progressView;
    BOOL _isPresentingAlert;
    struct { BOOL photosGlobalFooterViewDidChangeHeight; } _delegateRespondsTo;
    BOOL _isPerformingChanges;
}

@property (readonly, nonatomic) BOOL needsWorkaroundFor53444616;
@property (retain, nonatomic) PXFooterViewModel *viewModel;
@property (weak, nonatomic) id<PXPhotosGlobalFooterViewDelegate> delegate;
@property (weak, nonatomic) id<PXPhotosGlobalFooterViewLayoutDelegate> layoutDelegate;
@property (readonly, nonatomic) double currentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTitle;
- (void)_updateAccessory;
- (void)_updateFilterView;
- (id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Font;
- (void)_animatedIconCrossedGridCycleBoundary;
- (void)_updateProgressAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)setHidden:(BOOL)a0;
- (void)_configurePhotoCollectionGlobalFooterProgressView:(id)a0 paused:(BOOL)a1;
- (void)_updateSubtitle1;
- (void)layoutSubviews;
- (void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)a0;
- (void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)a0;
- (id)_photoCollectionGlobalFooterSubtitleTextViewAttributesDisabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSubtitle2;
- (void)_configurePhotoCollectionGlobalFooterLabel:(id)a0 withFont:(id)a1 textColor:(id)a2;
- (void)_updateAnimatedIcon;
- (id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Color;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_configurePhotoCollectionGlobalFooterSubtitleTextView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
