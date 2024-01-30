@class NSString;

@interface MBSnapshotIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *backupUDID;
@property (nonatomic) unsigned long long snapshotID;
@property (readonly, nonatomic) NSString *backupUUID;
@property (readonly, nonatomic) NSString *snapshotUUID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBackupUDID:(id)a0 snapshotID:(unsigned long long)a1;
- (id)initWithBackupUUID:(id)a0 snapshotUUID:(id)a1;

@end
