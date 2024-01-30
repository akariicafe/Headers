@class NSString, NSDate;

@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long backupType;
@property (retain, nonatomic) NSString *requiredProductVersion;
@property (readonly, nonatomic) unsigned long long snapshotID;
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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSnapshotID:(unsigned long long)a0 snapshotUUID:(id)a1 deviceName:(id)a2 date:(id)a3 created:(id)a4 modified:(id)a5 state:(int)a6 isCompatible:(BOOL)a7 systemVersion:(id)a8 buildVersion:(id)a9 quotaReserved:(unsigned long long)a10 backupType:(long long)a11;
- (id)initWithSnapshotID:(unsigned long long)a0 deviceName:(id)a1 date:(id)a2 created:(id)a3 modified:(id)a4 state:(int)a5 isCompatible:(BOOL)a6 systemVersion:(id)a7 buildVersion:(id)a8 quotaReserved:(unsigned long long)a9 backupType:(long long)a10;
- (id)initWithSnapshotUUID:(id)a0 snapshotID:(unsigned long long)a1 deviceName:(id)a2 date:(id)a3 created:(id)a4 modified:(id)a5 state:(int)a6 isCompatible:(BOOL)a7 systemVersion:(id)a8 buildVersion:(id)a9 quotaReserved:(unsigned long long)a10 backupType:(long long)a11;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
