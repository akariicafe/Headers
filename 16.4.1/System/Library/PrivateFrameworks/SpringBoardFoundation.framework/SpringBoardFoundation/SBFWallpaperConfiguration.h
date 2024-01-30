@class SBFWallpaperImage, SBFWallpaperOptions;

@interface SBFWallpaperConfiguration : PBUIWallpaperConfiguration

@property (readonly, nonatomic) SBFWallpaperImage *wallpaperImage;
@property (readonly, copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;

@end
