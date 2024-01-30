@class NSString, UILabel, CAShapeLayer;

@interface _NTKCFaceDetailCollectionCellLabel : UIView {
    UILabel *_label;
    CAShapeLayer *_background;
}

@property (nonatomic) BOOL usesShortTextWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) double firstLineBaseline;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)_activeFont;
- (id)_inactiveTextColor;
- (id)_inactiveFont;
- (id)_activeTextColor;

@end
