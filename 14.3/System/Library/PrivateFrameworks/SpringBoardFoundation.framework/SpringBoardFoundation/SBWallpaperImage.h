@class NSURL;

@interface SBWallpaperImage : UIImage

@property (readonly, copy, nonatomic) NSURL *wallpaperFileURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2 wallpaperFileURL:(id)a3;
- (id)initWithFlatColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFlatColor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
