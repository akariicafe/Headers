@class NSArray, NRDevice;

@interface NRMigrator : NSObject {
    BOOL _migrating;
}

@property (readonly, nonatomic) BOOL migrationIsAvailable;
@property (readonly, retain, nonatomic) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (readonly, retain, nonatomic) NSArray *migratableDevicesRequiringConsent;
@property (readonly, retain, nonatomic) NSArray *migratableDevices;
@property (readonly, retain, nonatomic) NRDevice *migratingDevice;

+ (id)migrationDataPreRestoreForConsentedDevices:(id)a0;
+ (id)sharedMigrator;
+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)a0;

- (id)devicesFromMigrationConsentRequestData:(id)a0;
- (void).cxx_destruct;
- (id)migrationConsentRequestData;
- (void)enterPreMigrationMode;
- (void)beginMigrationWithDevice:(id)a0 passcode:(id)a1 withBlock:(id /* block */)a2;
- (void)setMigrationConsented:(BOOL)a0 forDeviceID:(id)a1 withBlock:(id /* block */)a2;
- (void)beginMigrationWithDevice:(id)a0 withCompletion:(id /* block */)a1;
- (id)lastMigrationRequestPhoneName;
- (void)isPhoneReadyToMigrateDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)setMigrationConsented:(BOOL)a0 forDevice:(id)a1 withBlock:(id /* block */)a2;

@end
