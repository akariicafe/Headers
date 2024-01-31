@class UIFont, AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {
    UIFont *_titleFont;
}

@property (retain, nonatomic) AVLoadingButtonView *loadingButtonView;
@property (nonatomic) BOOL showsLoadingIndicator;

- (id)titleFont;
- (id)view;
- (void)_updateTintColor;
- (void).cxx_destruct;
- (void)setTitleFont:(id)a0;
- (id)initWithTitle:(id)a0 type:(long long)a1;
- (void)_buttonTouchUpInside:(id)a0;

@end
