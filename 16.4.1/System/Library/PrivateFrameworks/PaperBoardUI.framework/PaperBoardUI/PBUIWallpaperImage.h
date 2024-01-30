@class NSURL;

@interface PBUIWallpaperImage : UIImage

@property (readonly, copy, nonatomic) NSURL *wallpaperFileURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFlatColor:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2 wallpaperFileURL:(id)a3;
- (id)initWithFlatColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
