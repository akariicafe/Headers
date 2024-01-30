@interface DBIconImageCache : NSObject

+ (id)_iconImageCache;
+ (id)_imageKeyForBundleIdentifier:(id)a0 inVehicle:(id)a1;

- (id)iconImageForBundleIdentifier:(id)a0 inVehicle:(id)a1;
- (void)setIconImage:(id)a0 forBundleIdentifier:(id)a1 inVehicle:(id)a2;

@end
