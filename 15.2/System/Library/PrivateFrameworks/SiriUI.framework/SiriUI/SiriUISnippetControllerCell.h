@class UICollectionReusableView, NSString, SiriUIContentButton, SiriUIKeyline, UIView, UILabel, SiriUISnippetViewController;
@protocol SiriUIReusableView;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {
    SiriUIKeyline *_bottomKeyline;
    SiriUIContentButton *_snippetPunchOutButton;
    UIView *_snippetBackgroundView;
    UIView *_materialView;
    UIView *_clippingContainerView;
    UIView *_cancelledTouchPreventionView;
    UILabel *_cancelledLabel;
    BOOL _cellIsUsingPlatterStyle;
    double _topPadding;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
}

@property (nonatomic, getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } snippetEdgeInsets;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementKind;
+ (id)reuseIdentifier;
+ (double)defaultHeight;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsForCollectionViewCellBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snippetViewController:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setTopPadding:(double)a0;
- (void)setShowBackgroundView:(BOOL)a0;
- (void)_snippetPunchOutButtonTapped:(id)a0;
- (void)_configureSubviewsForCurrentInset;
- (double)_heightForFooterView;
- (double)_heightForTransparentHeaderView;
- (double)_heightForTransparentFooterView;
- (double)_heightForHeaderView;
- (void)_setHeaderView:(id)a0;
- (void)_setFooterView:(id)a0;
- (void)_setTransparentHeaderView:(id)a0;
- (void)_setTransparentFooterView:(id)a0;
- (void)animateSnippetCancellationWithCompletion:(id /* block */)a0;
- (void)animateSnippetConfirmationWithCompletion:(id /* block */)a0;
- (void)animateSnippetResizeToSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
