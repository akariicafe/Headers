@interface FIAppStoreAvailability : NSObject

+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)a0;
+ (BOOL)_isDeviceTablet;
+ (void)_isSupportedDeviceAvailableWithCompletion:(id /* block */)a0;
+ (void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id /* block */)a0;

@end
