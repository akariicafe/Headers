@class UILayoutGuide, UIVisualEffectView, REUpNextImageView, UILabel;

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UILabel *_detail1Label;
    UILabel *_detail2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_bodyEffectView;
    UIVisualEffectView *_detail1EffectView;
    UIVisualEffectView *_detail2EffectView;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)_updateHeaderColor;
- (void)defaultTextColorDidChange;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
