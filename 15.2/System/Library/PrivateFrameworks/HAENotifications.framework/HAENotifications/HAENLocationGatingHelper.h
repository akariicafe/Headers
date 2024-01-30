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

- (int)_getMGProductType;
- (void)_setHEANEnabled:(id)a0;
- (void)_updateSampleTransient:(id)a0;
- (BOOL)_validDataDisposition:(id)a0;
- (void)_loadRegionPlistFile;
- (void)_donateSignalToTipsKitOnInitialization;
- (void)deviceDataDispositionDidChange;
- (BOOL)_shouldUpdateLocation:(id)a0;
- (BOOL)_regionAndDeviceMandatesFeature:(id)a0;
- (void)update;
- (void)_setFeatureMandatoryFlag:(id)a0;
- (void)_donateSignalToTipsKit:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_logLocationGatingFlags;
- (void)_updateLocationGatingFlags;
- (struct { id x0; id x1; id x2; BOOL x3; BOOL x4; })getStats;
- (id)_readDeviceDisposition;
- (BOOL)_isIPod;
- (BOOL)_isHAENFeatureMandatory:(id)a0 dataDisposition:(id)a1;
- (BOOL)_validCountryCodeSource:(unsigned int)a0;
- (void)dealloc;
- (void)_contryConfigurationDidChange:(id)a0;
- (void)_updateStatsWithGeoLocation:(id)a0 disposition:(id)a1 andMandatoryFlag:(BOOL)a2;
- (void)reloadProductTypeOverride;
- (void)_updateImpl;

@end
