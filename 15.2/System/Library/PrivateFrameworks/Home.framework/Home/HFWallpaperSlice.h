@class NSString, UIImage;

@interface HFWallpaperSlice : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) UIImage *image;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 variant:(long long)a1 identifier:(id)a2 image:(id)a3;
- (BOOL)isSlicedFromWallpaper:(id)a0;

@end
