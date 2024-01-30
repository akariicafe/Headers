@class UIImage;

@interface NTKUpNextRichComplicationBezelConfiguration : NTKUpNextComplicationConfiguration

@property (readonly, nonatomic) UIImage *maskImage;
@property (readonly, nonatomic) double radius;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMaskImage:(id)a0 radius:(double)a1;
- (id)_newPickerView;

@end
