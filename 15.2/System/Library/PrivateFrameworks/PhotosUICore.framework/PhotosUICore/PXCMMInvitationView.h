@class UIFont, NSString, UIView, PXRoundedCornerOverlayView, PXCMMPosterHeaderView, PXCMMInvitationViewModel, UILabel, UIColor;
@protocol PXCMMInvitationViewDelegate;

@interface PXCMMInvitationView : UICollectionViewCell <PXChangeObserver> {
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
}

@property (class, readonly) UIFont *titleFont;
@property (class, readonly) UIFont *titleEmphasizedFont;
@property (class, readonly) UIFont *subtitle1Font;
@property (class, readonly) UIFont *subtitle2Font;
@property (class, readonly) long long titleTextStyle;
@property (class, readonly) long long subtitle1TextStyle;
@property (class, readonly) long long subtitle2TextStyle;
@property (class, readonly) UIColor *titleBulletColor;
@property (class, readonly) UIColor *subtitle1Color;
@property (class, readonly) UIColor *subtitle2Color;

@property (retain, nonatomic) PXCMMInvitationViewModel *viewModel;
@property (weak, nonatomic) id<PXCMMInvitationViewDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerViewBounds;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;
+ (struct CGSize { double x0; double x1; })posterHeaderViewSizeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })posterImageSizeThatFits:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (BOOL)_updateTitle;
- (void)_updateHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_updateSubtitle2;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (BOOL)_updateSubtitle1;
- (id)focusEffect;
- (id)test_title;
- (void)_updateOpaqueAncestorBackgroundColor;
- (id)test_subtitle1;
- (id)test_subtitle2;
- (BOOL)test_selected;

@end
