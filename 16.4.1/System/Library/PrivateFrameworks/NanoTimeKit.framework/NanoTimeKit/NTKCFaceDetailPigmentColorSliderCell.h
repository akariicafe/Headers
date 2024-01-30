@class NTKColorSlider;
@protocol NTKCFaceDetailPigmentColorSliderCellDelegate;

@interface NTKCFaceDetailPigmentColorSliderCell : NTKCFaceDetailRowActionCell <NTKColorSliderDelegate> {
    NTKColorSlider *_slider;
}

@property (weak, nonatomic) id<NTKCFaceDetailPigmentColorSliderCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)rowHeight;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)colorSlider:(id)a0 valueChanged:(double)a1 phase:(long long)a2;
- (void)setColorFraction:(double)a0 animated:(BOOL)a1;
- (void)setColors:(id)a0 animated:(BOOL)a1;

@end
