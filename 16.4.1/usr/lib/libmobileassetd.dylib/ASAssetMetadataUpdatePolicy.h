@interface ASAssetMetadataUpdatePolicy : NSObject

+ (id)policy;

- (char *)trainName;
- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateInterval:(double)a2;
- (id)_stringPreferenceValueForKey:(id)a0;
- (id)checkPreferencesForOverride:(id)a0;
- (id)getSystemAppURL:(id)a0;
- (double)defaultNetworkTimeout;
- (id)serverURLForAssetType:(id)a0;
- (double)automaticMetadataUpdateIntervalForAssetType:(id)a0;
- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateError:(id)a2;

@end
