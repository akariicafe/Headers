@class NSString, UILabel, CAShapeLayer;

@interface _NTKCFaceDetailCollectionCellLabel : UIView {
    UILabel *_label;
    CAShapeLayer *_background;
}

@property (nonatomic) BOOL usesShortTextWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) double firstLineBaseline;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_inactiveTextColor;
- (id)_inactiveFont;
- (id)_activeFont;
- (id)_activeTextColor;

@end
