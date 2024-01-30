@class NSString, HAENGeoLocation, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HAENLocationGatingHelper : NSObject {
    HAENGeoLocation *_geoLocation;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSDictionary *_regionBehavior;
    BOOL _EUVolumeLimitFlagOn;
    NSNumber *_productTypeOverride;
    struct { NSString *countryCode; NSString *source; NSString *disposition; BOOL featureMandatory; BOOL EUVolumeLimitBehavior; } _stats;
}

+ (id)sharedInstance;

- (void)_logLocationGatingFlags;
- (BOOL)_isHAENFeatureMandatory:(id)a0 dataDisposition:(id)a1;
- (BOOL)_validCountryCodeSource:(unsigned int)a0;
- (void)deviceDataDispositionDidChange;
- (void)_donateSignalToTipsKitOnInitialization;
- (void)_setFeatureMandatoryFlag:(id)a0;
- (void)update;
- (BOOL)_isIPod;
- (void)_updateLocationGatingFlags;
- (void)_loadRegionPlistFile;
- (id)_readDeviceDisposition;
- (void)dealloc;
- (BOOL)_shouldUpdateLocation:(id)a0;
- (void)reloadProductTypeOverride;
- (int)_getMGProductType;
- (struct { id x0; id x1; id x2; BOOL x3; BOOL x4; })getStats;
- (BOOL)_validDataDisposition:(id)a0;
- (void)_updateImpl;
- (id)init;
- (void)_contryConfigurationDidChange:(id)a0;
- (void)_setHEANEnabled:(id)a0;
- (void)_updateStatsWithGeoLocation:(id)a0 disposition:(id)a1 andMandatoryFlag:(BOOL)a2;
- (void)_updateSampleTransient:(id)a0;
- (BOOL)_regionAndDeviceMandatesFeature:(id)a0;
- (void).cxx_destruct;
- (void)_donateSignalToTipsKit:(BOOL)a0;

@end
