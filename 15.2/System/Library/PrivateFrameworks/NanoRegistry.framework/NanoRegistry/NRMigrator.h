@class NSArray, NRDevice;

@interface NRMigrator : NSObject {
    BOOL _migrating;
}

@property (readonly, nonatomic) BOOL migrationIsAvailable;
@property (readonly, retain, nonatomic) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (readonly, retain, nonatomic) NSArray *migratableDevicesRequiringConsent;
@property (readonly, retain, nonatomic) NSArray *migratableDevices;
@property (readonly, retain, nonatomic) NRDevice *migratingDevice;

+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)a0;
+ (id)sharedMigrator;
+ (id)migrationDataPreRestoreForConsentedDevices:(id)a0;

- (id)devicesFromMigrationConsentRequestData:(id)a0;
- (void)enterPreMigrationMode;
- (void)setMigrationConsented:(BOOL)a0 forDevice:(id)a1 withBlock:(id /* block */)a2;
- (id)lastMigrationRequestPhoneName;
- (void).cxx_destruct;
- (id)migrationConsentRequestData;
- (void)beginMigrationWithDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)beginMigrationWithDevice:(id)a0 passcode:(id)a1 withBlock:(id /* block */)a2;
- (void)isPhoneReadyToMigrateDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)setMigrationConsented:(BOOL)a0 forDeviceID:(id)a1 withBlock:(id /* block */)a2;

@end
