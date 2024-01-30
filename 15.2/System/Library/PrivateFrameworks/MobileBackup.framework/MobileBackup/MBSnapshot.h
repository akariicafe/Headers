@class NSString, NSDate;

@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long backupType;
@property (nonatomic) long long backupPolicy;
@property (retain, nonatomic) NSString *requiredProductVersion;
@property (nonatomic) long long estimatedRestoreSize;
@property (nonatomic) long long accountType;
@property (readonly, nonatomic) unsigned long long snapshotID;
@property (readonly, nonatomic) NSString *backupUUID;
@property (readonly, nonatomic) NSString *snapshotUUID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDate *created;
@property (readonly, nonatomic) NSDate *modified;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) BOOL isCompatible;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) unsigned long long quotaReserved;

- (id)initWithSnapshotID:(unsigned long long)a0 backupUUID:(id)a1 snapshotUUID:(id)a2 deviceName:(id)a3 date:(id)a4 created:(id)a5 modified:(id)a6 state:(int)a7 isCompatible:(BOOL)a8 systemVersion:(id)a9 buildVersion:(id)a10 quotaReserved:(unsigned long long)a11 backupType:(long long)a12 backupPolicy:(long long)a13 accountType:(long long)a14;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
