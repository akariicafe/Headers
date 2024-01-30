@interface PBUIPosterWallpaperMigrationInfo : NSObject

@property (readonly, nonatomic) char pairingType;
@property (readonly, nonatomic) char lockProvider;
@property (readonly, nonatomic) char homeProvider;

- (id)description;
- (id)_initWithPairingType:(char)a0 lockProvider:(char)a1 homeProvider:(char)a2;

@end
