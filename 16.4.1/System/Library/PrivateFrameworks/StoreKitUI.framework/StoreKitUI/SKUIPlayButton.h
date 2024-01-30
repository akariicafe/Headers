@class NSString, SKUIPlayButtonImageCache;

@interface SKUIPlayButton : SKUIPlayButtonControl {
    BOOL _showStop;
}

@property (readonly, nonatomic) SKUIPlayButtonImageCache *imageCache;
@property (nonatomic) long long itemIdentifier;
@property (copy, nonatomic) NSString *playItemIdentifier;
@property (nonatomic) BOOL showOnDemand;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic) BOOL useLargeButton;
@property (nonatomic, getter=isRadio) BOOL radio;

+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)refresh;
- (id)images;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setBackgroundType:(long long)a0;
- (id)defaultBackgroundColor;
- (void).cxx_destruct;
- (float)buttonCornerRadius;
- (void)_updateEnabledState;
- (id)outerBorderColor;
- (id)playImage;
- (BOOL)showOuterBorder;
- (id)cancelImage;
- (void)playIndicatorDidChange:(BOOL)a0;
- (void)reloadWithItemStatus:(id)a0 animated:(BOOL)a1;

@end
