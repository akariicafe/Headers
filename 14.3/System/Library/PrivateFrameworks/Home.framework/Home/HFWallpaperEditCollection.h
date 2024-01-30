@class HFWallpaper, HFWallpaperSlice;

@interface HFWallpaperEditCollection : NSObject

@property (readonly, nonatomic) HFWallpaper *wallpaper;
@property (readonly, nonatomic) HFWallpaperSlice *originalSlice;
@property (readonly, nonatomic) HFWallpaperSlice *processedSlice;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWallpaper:(id)a0 originalSlice:(id)a1 processedSlice:(id)a2;

@end
