@class NSString;

@interface HUNamedWallpaperFactory : NSObject <HFNamedWallpaperSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_gradientWallpaperImageForIdentifier:(id)a0;
+ (id)_defaultBlackWallpaperImage;

- (id)allWallpapersForCollection:(long long)a0;
- (id)defaultWallpaperForCollection:(long long)a0;
- (id)imageForWallpaper:(id)a0;

@end
