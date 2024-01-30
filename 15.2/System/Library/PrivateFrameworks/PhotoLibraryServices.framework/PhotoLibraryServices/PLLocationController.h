@class NSString, NSDictionary, CLLocationManager, PLPhotoLibrary, NSMutableArray;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    BOOL _isEnabled;
    BOOL _isUpdating;
    BOOL _isHeadingEnabled;
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)usesEffectiveBundleIdentifier;
+ (void)setUsesEffectiveBundleIdentifier:(BOOL)a0;

- (void)setEnabled:(BOOL)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (id)photoLibrary;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void).cxx_destruct;
- (id)init;
- (void)_updateLocationRunState;
- (void)_applicationStateChanged:(id)a0;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)a0 rearFacingCamera:(BOOL)a1;
- (BOOL)_addLocationToAsset:(id)a0;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)a0 deviceOrientation:(int)a1 cameraWasRearFacing:(BOOL)a2;
- (void)_updatePendingAssets;
- (void)_assetContainerChanged:(id)a0;
- (id)locationString;
- (void)dealloc;
- (id)location;
- (void)setHeadingEnabled:(BOOL)a0;

@end
