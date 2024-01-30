@class NSUUID;

@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *pairingID;
@property (nonatomic) unsigned long long initialSyncState;
@property (nonatomic) unsigned int syncSwitchIndex;
@property (nonatomic) unsigned int migrationIndex;
@property (readonly, nonatomic) BOOL hasCompletedInitialSync;
@property (readonly, nonatomic) BOOL hasCompletedSync;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)hasCompletedInitialOrMigrationSync;
- (id)initWithPairingID:(id)a0 syncState:(unsigned long long)a1;

@end
