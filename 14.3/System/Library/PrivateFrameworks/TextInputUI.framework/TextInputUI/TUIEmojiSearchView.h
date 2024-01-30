@class TUIEmojiSearchTextField, UICollectionView, UIView, UILabel;

@interface TUIEmojiSearchView : UIView {
    UIView *_searchTextFieldPortal;
    UIView *_bottomHalfContainerView;
    UIView *_predictionViewWrapperView;
    UIView *_resultsCollectionContainerView;
    UILabel *_noResultsLabelView;
}

@property (readonly, nonatomic) TUIEmojiSearchTextField *searchTextField;
@property (retain, nonatomic) UICollectionView *resultsCollectionView;
@property (retain, nonatomic) UIView *predictionView;
@property (nonatomic) BOOL predictionViewVisible;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) BOOL noResultsLabelVisible;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setPredictionViewVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)setNoResultsLabelVisible:(BOOL)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_handBiasedEdgeInsets;
- (void)_didChangeHandBiasNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
