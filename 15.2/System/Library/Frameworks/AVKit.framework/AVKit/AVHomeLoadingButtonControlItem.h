@class UIFont, AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {
    UIFont *_titleFont;
}

@property (retain, nonatomic) AVLoadingButtonView *loadingButtonView;
@property (nonatomic) BOOL showsLoadingIndicator;

- (void)setTitleFont:(id)a0;
- (id)titleFont;
- (void)_updateTintColor;
- (id)view;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 type:(long long)a1;
- (void)_buttonTouchUpInside:(id)a0;

@end
