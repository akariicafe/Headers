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
+ (void)setUsesEffectiveBundleIdentifier:(BOOL)a0;
+ (BOOL)usesEffectiveBundleIdentifier;

- (id)photoLibrary;
- (void)setHeadingEnabled:(BOOL)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)location;
- (id)locationString;
- (void)_startUpdating;
- (void)_stopUpdating;
- (BOOL)_addLocationToAsset:(id)a0;
- (void)_applicationStateChanged:(id)a0;
- (void)_assetContainerChanged:(id)a0;
- (void)_updateLocationRunState;
- (void)_updatePendingAssets;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)a0 deviceOrientation:(int)a1 cameraWasRearFacing:(BOOL)a2;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)a0 rearFacingCamera:(BOOL)a1;

@end
