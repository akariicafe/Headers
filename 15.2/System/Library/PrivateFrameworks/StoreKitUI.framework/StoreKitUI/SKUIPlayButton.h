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

- (void)setBackgroundType:(long long)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (id)defaultBackgroundColor;
- (void).cxx_destruct;
- (id)images;
- (void)refresh;
- (void)tintColorDidChange;
- (float)buttonCornerRadius;
- (id)playImage;
- (id)outerBorderColor;
- (void)_updateEnabledState;
- (void)reloadWithItemStatus:(id)a0 animated:(BOOL)a1;
- (BOOL)showOuterBorder;
- (id)cancelImage;
- (void)playIndicatorDidChange:(BOOL)a0;

@end
