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
@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly, nonatomic) BOOL hasSecureData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)newWithDictionaryRepresentation:(id)a0 partitionedDictionaryRepresentation:(id)a1 context:(id)a2;
+ (id)newWithCKRecord:(id)a0;
+ (id)newWithDNDSIDSRecord:(id)a0;

- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)shortDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)populateCKRecord:(inout id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)log:(id)a0 withMessage:(id)a1;
- (BOOL)populateDNDSIDSRecord:(inout id)a0;
- (id)_initWithMode:(id)a0 configuration:(id)a1 secureConfiguration:(id)a2 triggers:(id)a3 impactsAvailability:(unsigned long long)a4 dimsLockScreen:(unsigned long long)a5 created:(id)a6 lastModified:(id)a7 automaticallyGenerated:(BOOL)a8 hasSecureData:(BOOL)a9;

@end
