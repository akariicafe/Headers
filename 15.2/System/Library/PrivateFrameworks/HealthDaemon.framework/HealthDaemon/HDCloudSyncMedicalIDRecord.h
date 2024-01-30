@class HDCodableMedicalIDData, NSArray, HDCloudSyncCodableMedicalID;

@interface HDCloudSyncMedicalIDRecord : HDCloudSyncRecord {
    HDCloudSyncCodableMedicalID *_underlyingCodableMedicalIDMessage;
}

@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (readonly, nonatomic) NSArray *medicalIDLogs;

+ (BOOL)isMedicalIDRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (BOOL)requiresUnderlyingMessage;
+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;

- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)description;
- (id)printDescription;
- (void).cxx_destruct;
- (id)serializeUnderlyingMessage;
- (id)initInSyncCircle:(id)a0;
- (id)initInZone:(id)a0;
- (void)addMedicalIDEvent:(id)a0;

@end
