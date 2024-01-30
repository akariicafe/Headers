@class UIColor, UIImageView, NTKPigmentEditOption, CLKDevice;

@interface _NTKPigmentAddCell : UICollectionViewCell

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption;
@property (readonly, nonatomic) UIImageView *swatch;
@property (readonly, nonatomic) UIImageView *check;

+ (id)reuseIdentifier;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateCheck;

@end
