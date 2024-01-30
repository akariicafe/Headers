@interface GEOMapItemPhotoOptions : NSObject

@property (readonly, nonatomic) BOOL allowSmaller;
@property (readonly, nonatomic) long long preferredCropStyle;
@property (readonly, nonatomic) long long preferredFormat;

+ (id)defaultPhotoOptionsWithAllowSmaller:(BOOL)a0;
+ (id)defaultPhotoOptionsWithCropStyle:(long long)a0;

- (id)initWithAllowSmaller:(BOOL)a0 cropStyle:(long long)a1 format:(long long)a2;

@end
