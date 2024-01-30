@class NSString;

@interface WFCustomSymbolToolbarButton : UIButton

@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic) double pointSizeToWidthRatio;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateImage;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setSymbolName:(id)a0 pointSizeToWidthRatio:(double)a1;

@end
