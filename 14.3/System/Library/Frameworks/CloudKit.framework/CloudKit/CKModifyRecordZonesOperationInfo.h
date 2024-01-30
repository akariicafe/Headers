@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
