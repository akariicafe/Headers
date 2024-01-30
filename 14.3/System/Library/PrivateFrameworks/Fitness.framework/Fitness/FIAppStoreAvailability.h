@interface FIAppStoreAvailability : NSObject

+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)a0;
+ (BOOL)_isDeviceTablet;
+ (void)_isStorefrontContentAvailableWithCompletion:(id /* block */)a0;
+ (void)_isSupportedWatchAvailableWithCompletion:(id /* block */)a0;

@end
