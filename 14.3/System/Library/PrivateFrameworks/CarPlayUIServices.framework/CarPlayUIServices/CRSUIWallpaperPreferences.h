@class NSArray, CRSUIWallpaper, CRVehicle, CRPairedVehicleManager;

@interface CRSUIWallpaperPreferences : NSObject

@property (class, readonly, nonatomic) NSArray *availableWallpapers;
@property (class, readonly, nonatomic) CRSUIWallpaper *defaultWallpaper;

@property (retain, nonatomic) CRPairedVehicleManager *vehicleManager;
@property (retain, nonatomic) CRVehicle *vehicle;
@property (retain, nonatomic) CRSUIWallpaper *currentWallpaper;

+ (id)wallpaperWithIdentifier:(id)a0;
+ (id)_wallpaperWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
