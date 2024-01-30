@class NSString, NSArray, NSMutableDictionary, RDEstimate;

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding> {
    NSString *_countryFromLocation;
    NSString *_countryFromMCC;
    NSString *_countryFromWiFiAPs;
    RDEstimate *_localOnlyEstimate;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)getCacheDirPathForUnitTest;
+ (id)sortPreferredOrder:(id)a0;
+ (id)getCacheDirPath;
+ (id)loadCache;
+ (id)getUserPath:(id)a0;
+ (id)getCacheDirPathLegacy;
+ (void)createCacheAtPath:(id)a0;
+ (void)createCacheDirectoryIfNeeded:(BOOL)a0;
+ (id)loadCacheForUnitTest;
+ (id)loadCache:(BOOL)a0;

- (void)setCountryFromMCCForUnitTest:(id)a0;
- (void)removeEstimateForPeerDeviceWithID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)saveCache:(BOOL)a0;
- (void)recompute;
- (void)setEstimateForUnitTest:(id)a0 forPeerDeviceWithID:(id)a1;
- (void)setCountryFromWiFiAPs:(id)a0;
- (BOOL)saveCacheForUnitTest;
- (id)countryCodeForPriority:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)computeLocalCountryCode;
- (id)getLastKnownCombinedEstimate;
- (void)setCountryFromLocation:(id)a0 forUnitTest:(BOOL)a1;
- (void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)a0;
- (id)getCombinedEstimate;
- (id)initWithCountryCodeFromLocation:(id)a0 fromMCC:(id)a1 fromWiFi:(id)a2 localEstimate:(id)a3 combinedEstimate:(id)a4 lastKnownCombinedEstimate:(id)a5 peerEstimates:(id)a6;
- (void)recompute:(BOOL)a0;
- (void)setCountryFromLocation:(id)a0;
- (BOOL)saveCache;
- (id)getLocalOnlyEstimate;
- (void)setCountryFromWiFiAPs:(id)a0 forUnitTest:(BOOL)a1;
- (void)setCountryFromMCC:(id)a0;
- (void)setCountryFromMCC:(id)a0 forUnitTest:(BOOL)a1;
- (id)description;
- (void)setCountryFromLocationForUnitTest:(id)a0;
- (id)getEstimateForPeerDeviceWithID:(id)a0;
- (void)setCountryFromWiFiAPsForUnitTest:(id)a0;
- (void).cxx_destruct;
- (void)setEstimate:(id)a0 forPeerDeviceWithID:(id)a1;

@end
