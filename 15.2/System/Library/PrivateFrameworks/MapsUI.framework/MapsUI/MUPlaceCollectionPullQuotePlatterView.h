@class MUPullQuoteView, UITapGestureRecognizer, MUCuratedCollectionSummaryView;
@protocol MUPlaceCollectionPullQuoteViewModel, MUPlaceCollectionPullQuotePlatterViewDelegate;

@interface MUPlaceCollectionPullQuotePlatterView : UIView {
    MUCuratedCollectionSummaryView *_collectionSummaryView;
    MUPullQuoteView *_pullQuoteView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (weak, nonatomic) id<MUPlaceCollectionPullQuotePlatterViewDelegate> delegate;
@property (retain, nonatomic) id<MUPlaceCollectionPullQuoteViewModel> viewModel;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupSubviews;
- (void)_didSelectCollection;

@end
