@class PXCMMPosterHeaderViewModel, NSString, PXCMMImageView, PXCMMPosterHeaderViewSpec, PXGradientView, UILabel, UIImageView;

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver> {
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
}

@property (readonly, nonatomic) long long presentationStyle;
@property (retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForWidth:(double)a0 traitCollection:(id)a1 screen:(id)a2;
+ (void)preheatSharedValuesForPresentationStyle:(long long)a0;

- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_updateTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSubtitle;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_updateFonts;
- (void)_updateStatusString;
- (id)test_title;
- (id)initWithPresentationStyle:(long long)a0;
- (void)_performLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)test_subtitle;
- (id)test_statusString;
- (BOOL)test_showStatusCheckmark;

@end
