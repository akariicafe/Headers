@class UIFont, AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {
    UIFont *_titleFont;
}

@property (retain, nonatomic) AVLoadingButtonView *loadingButtonView;
@property (nonatomic) BOOL showsLoadingIndicator;

- (id)view;
- (void)_updateTintColor;
- (id)titleFont;
- (void).cxx_destruct;
- (void)setTitleFont:(id)a0;
- (void)_buttonTouchUpInside:(id)a0;
- (id)initWithTitle:(id)a0 type:(long long)a1;

@end
