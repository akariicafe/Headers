@class SASCloudKitClient, NSObject;
@protocol OS_dispatch_queue;

@interface SASExpressCloudSettings : NSObject

@property (retain, nonatomic) SASCloudKitClient *cloudKitClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)_isCloudKitError:(id)a0;
+ (id)_predicateForRecordsModifiedInPastMonth;
+ (id)_queryForSettingsForDeviceID:(id)a0;
+ (id)_queryForSettingsFromPastMonth;
+ (id)_queryForSettingsFromPastMonthForDeviceClass:(id)a0;
+ (id)_queryForSettingsFromPastMonthForPlatform:(unsigned long long)a0;
+ (id)_zoneForSettings;

- (id)initWithContainerIdentifier:(id)a0;
- (void)setXpcActivity:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)updateSettings:(id)a0 withCompletion:(id /* block */)a1;
- (id)_createSettingsRecordInZoneID:(id)a0 forDeviceID:(id)a1;
- (void)_fetchAppropriateSettingsWithCompletion:(id /* block */)a0;
- (void)_setupRecordZoneWithName:(id)a0 completion:(id /* block */)a1;

@end
