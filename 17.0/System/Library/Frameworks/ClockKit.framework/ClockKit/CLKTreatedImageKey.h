@class UIImage;

@interface CLKTreatedImageKey : NSObject <NSCopying>

@property (readonly, nonatomic) UIImage *rawImage;
@property (readonly, nonatomic) long long scaleMode;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSDKSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxDeviceSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double sdkDeviceScale;
@property (readonly, nonatomic) long long maskMode;
@property (readonly, nonatomic) double cornerRadius;

+ (id)keyWithRawImage:(id)a0 maxSDKSize:(struct CGSize { double x0; double x1; })a1 maxDeviceSize:(struct CGSize { double x0; double x1; })a2 cornerRadius:(double)a3;
+ (id)keyWithRawImage:(id)a0 maxSDKSize:(struct CGSize { double x0; double x1; })a1 maxDeviceSize:(struct CGSize { double x0; double x1; })a2 maskMode:(long long)a3;
+ (id)keyWithRawImage:(id)a0 scale:(double)a1 sdkDeviceScale:(double)a2 cornerRadius:(double)a3;
+ (id)keyWithRawImage:(id)a0 scale:(double)a1 sdkDeviceScale:(double)a2 maskMode:(long long)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
