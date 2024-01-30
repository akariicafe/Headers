@class NSString, UILabel, CAShapeLayer;

@interface _NTKCFaceDetailCollectionCellLabel : UIView {
    UILabel *_label;
    CAShapeLayer *_background;
}

@property (nonatomic) BOOL usesShortTextWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) double firstLineBaseline;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)_inactiveTextColor;
- (id)_activeFont;
- (id)_activeTextColor;
- (id)_inactiveFont;

@end
