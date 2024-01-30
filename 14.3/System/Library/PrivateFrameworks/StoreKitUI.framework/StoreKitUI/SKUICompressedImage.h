@class UIColor;

@interface SKUICompressedImage : UIImage

@property (nonatomic) long long cornerType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

- (void).cxx_destruct;
- (id)description;

@end
