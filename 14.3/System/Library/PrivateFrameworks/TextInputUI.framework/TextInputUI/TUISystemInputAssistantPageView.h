@class TUIPredictionCellButton, NSString, UIScrollView, UIView;
@protocol TUISystemInputAssistantPageViewDelegate;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate> {
    unsigned long long _currentChevronStyle;
    BOOL _secondaryViewInitialized;
    BOOL _layoutIsDirty;
}

@property (retain, nonatomic) UIView *clipView;
@property (retain, nonatomic) UIView *primaryContainerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *primaryView;
@property (retain, nonatomic) UIView *secondaryView;
@property (nonatomic) BOOL hidesExpandButton;
@property (readonly, nonatomic) TUIPredictionCellButton *expandButton;
@property (weak, nonatomic) id<TUISystemInputAssistantPageViewDelegate> pageViewDelegate;
@property (nonatomic) BOOL secondaryViewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })_contentSize;
- (void)updateScrollEnabled;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageSymbolConfigurationForAssistantItem;
- (void)setSecondaryViewVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setRenderConfig:(id)a0;
- (void)didMoveToWindow;
- (id)_createExpandButtonIfNecessary;
- (void)layoutSubviews;
- (BOOL)_expandButtonVisible;
- (void)_checkOldBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forContentOffsetChangeWithNewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateExpandButtonChevronImage;
- (void)setSecondaryViewVisible:(BOOL)a0 withAnimationType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSecondaryViewVisible:(BOOL)a0 force:(BOOL)a1 withAnimationType:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)_expandChevronImageStyleForRenderConfig:(id)a0;

@end
