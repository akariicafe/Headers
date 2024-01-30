@class NSString, NSMutableDictionary, NSDate;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding>

@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache;
@property (retain, nonatomic) NSDate *expiry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)flowControlMaximumThrottleTime:(id)a0;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)a0;
- (unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)a0;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)a0;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)a0;
- (id)flowControlRegeneration:(id)a0;
- (unsigned long long)c2NetworkMetricsReportFrequency:(id)a0;
- (id)dictionaryPropertyEncoding;
- (id)valueForKeyPath:(id)a0 forContainerID:(id)a1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)a0;
- (unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)a0;
- (id)valuesForContainerID:(id)a0;
- (unsigned long long)c2AllOperationMetricsReportFrequency:(id)a0;
- (BOOL)applicationWithBundleID:(id)a0 canSyncUsingVersion:(id)a1 forContainerID:(id)a2;
- (id)chunkProfileConfigurationVersion:(id)a0;
- (long long)tokenRegisterDays:(id)a0;
- (unsigned long long)c2ClientOperationMetricsReportFrequency:(id)a0;
- (id)iCloudHostnames;
- (unsigned long long)maxBatchSize:(id)a0;
- (id)transcodeServerPublicKeyURLs:(id)a0;
- (id)chunkProfileConfigurationDefaultProfilePolicy:(id)a0;
- (double)publicIdentitiesExpirationTimeout:(id)a0;
- (BOOL)allowExpiredDNSBehavior:(id)a0;
- (id)initWithPropertyDictionary:(id)a0;
- (unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)a0;
- (id)flowControlBudget:(id)a0;
- (id)chunkProfileConfigurationFileExtensionToProfileMap:(id)a0;
- (id)initWithValues:(id)a0;

@end
