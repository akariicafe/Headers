@class DNDSModeRecord, DNDSConfigurationSecureRecord, DNDSConfigurationRecord, NSString, DNDSModeConfigurationTriggersRecord, NSDate;

@interface DNDSModeConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>

@property (readonly, copy, nonatomic) DNDSModeRecord *mode;
@property (readonly, copy, nonatomic) DNDSConfigurationRecord *configuration;
@property (readonly, copy, nonatomic) DNDSConfigurationSecureRecord *secureConfiguration;
@property (readonly, copy, nonatomic) DNDSModeConfigurationTriggersRecord *triggers;
@property (readonly, nonatomic) unsigned long long impactsAvailability;
@property (readonly, nonatomic) unsigned long long dimsLockScreen;
@property (readonly, copy, nonatomic) NSDate *created;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } lastModifiedByVersion;
@property (readonly, copy, nonatomic) NSString *lastModifiedByDeviceID;
@property (readonly, nonatomic) BOOL wasLastModifiedByThisDevice;
@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly, nonatomic) BOOL hasSecureData;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long ephemeralResolvedCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)dictionaryRepresentationWithCKRecord:(id)a0 partitionType:(unsigned long long)a1;
+ (id)newWithCKRecord:(id)a0;
+ (id)newWithDNDSIDSRecord:(id)a0;
+ (id)newWithDictionaryRepresentation:(id)a0 partitionedDictionaryRepresentation:(id)a1 context:(id)a2;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (long long)populateCKRecord:(inout id)a0 lastChanceRecord:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)populateDNDSIDSRecord:(inout id)a0;
- (void)log:(id)a0 withMessage:(id)a1;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMode:(id)a0 configuration:(id)a1 secureConfiguration:(id)a2 triggers:(id)a3 impactsAvailability:(unsigned long long)a4 dimsLockScreen:(unsigned long long)a5 created:(id)a6 lastModified:(id)a7 lastModifiedByVersion:(struct { long long x0; long long x1; long long x2; })a8 lastModifiedByDeviceID:(id)a9 automaticallyGenerated:(BOOL)a10 compatibilityVersion:(long long)a11 ephemeralResolvedCompatibilityVersion:(long long)a12 hasSecureData:(BOOL)a13;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;

@end
