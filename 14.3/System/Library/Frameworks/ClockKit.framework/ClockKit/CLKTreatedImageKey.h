@class UIImage;

@interface CLKTreatedImageKey : NSObject <NSCopying>

@property (readonly, nonatomic) UIImage *rawImage;
@property (readonly, nonatomic) long long scaleMode;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) long long maskMode;
@property (readonly, nonatomic) double cornerRadius;

+ (id)keyWithRawImage:(id)a0 scale:(double)a1 maskMode:(long long)a2;
+ (id)keyWithRawImage:(id)a0 scale:(double)a1 cornerRadius:(double)a2;
+ (id)keyWithRawImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 maskMode:(long long)a2;
+ (id)keyWithRawImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
