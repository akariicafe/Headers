@class NSString, NSArray;

@interface MBBackup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *backupUDID;
@property (readonly, nonatomic) NSString *backupUUID;
@property (readonly, nonatomic) NSString *backupUUIDSansPrefix;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) NSString *marketingName;
@property (readonly, nonatomic) NSArray *snapshots;
@property (readonly, nonatomic, getter=canRestoreSystemFiles) BOOL restoreSystemFiles;
@property (readonly, nonatomic) BOOL isMBSBackup;
@property (readonly, nonatomic) BOOL isBackupEnabled;
@property (readonly, nonatomic) BOOL hasBackupEnabledState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBackupUDID:(id)a0 backupUUID:(id)a1 deviceClass:(id)a2 productType:(id)a3 hardwareModel:(id)a4 marketingName:(id)a5 snapshots:(id)a6 restoreSystemFiles:(BOOL)a7 isMBSBackup:(BOOL)a8 isBackupEnabled:(BOOL)a9 hasBackupEnabledState:(BOOL)a10;

@end
