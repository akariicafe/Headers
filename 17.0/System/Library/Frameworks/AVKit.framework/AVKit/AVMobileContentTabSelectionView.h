@class AVMobileChromelessControlsStyleSheet, NSArray, CAGradientLayer, AVMobileContentTab, UIScrollView, NSMutableArray;
@protocol AVMobileContentTabSelectionViewDelegate;

@interface AVMobileContentTabSelectionView : UIView {
    NSMutableArray *_tabButtons;
    UIScrollView *_scrollingContentView;
    CAGradientLayer *_gradientFadeoutLayer;
}

@property (readonly, nonatomic) AVMobileContentTab *selectedTab;
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (copy, nonatomic) NSArray *contentTabs;
@property (weak, nonatomic) id<AVMobileContentTabSelectionViewDelegate> delegate;

- (void)resetSelection;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithStyleSheet:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_contentTabPressed:(id)a0;
- (void)_selectTab:(id)a0 withReason:(unsigned long long)a1;

@end
