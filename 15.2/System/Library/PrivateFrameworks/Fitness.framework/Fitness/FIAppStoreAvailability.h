@interface FIAppStoreAvailability : NSObject

+ (BOOL)_isDeviceTablet;
+ (void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id /* block */)a0;
+ (void)_isSupportedWatchAvailableWithCompletion:(id /* block */)a0;
+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)a0;

@end
