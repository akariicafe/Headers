@class NSString;

@interface HUNamedWallpaperFactory : NSObject <HFNamedWallpaperSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultBlackWallpaperImage;
+ (id)_gradientWallpaperImageForIdentifier:(id)a0;

@end
