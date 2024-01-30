@class HKDevice, NSString, NSUUID, HKContributor, NSDate, NSDictionary, HKSource, HKSourceRevision;

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding> {
    NSUUID *_UUID;
    NSDictionary *_metadata;
    long long _provenanceID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier;
@property (copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp;
@property (readonly, copy, nonatomic, getter=_timeZoneName) NSString *timeZoneName;
@property (readonly, nonatomic) HKContributor *contributor;
@property (readonly) NSUUID *UUID;
@property (readonly) HKSource *source;
@property (readonly) HKSourceRevision *sourceRevision;
@property (readonly) HKDevice *device;
@property (readonly, copy) NSDictionary *metadata;

+ (id)_newDataObjectWithMetadata:(id)a0 device:(id)a1 config:(id /* block */)a2;
+ (BOOL)_isConcreteObjectClass;

- (id)hk_UUID;
- (void)_setUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)prepareForSaving:(id *)a0;
- (id)_source;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setMetadata:(id)a0;
- (void)_validateForCreation;
- (id)_copyByArchiving;
- (id)_validateConfigurationAllowingPrivateMetadata:(BOOL)a0 applicationSDKVersion:(unsigned int)a1;
- (BOOL)_validateForSavingWithClientEntitlements:(id)a0 applicationSDKVersion:(unsigned int)a1 error:(id *)a2;
- (void)_setContributor:(id)a0;
- (BOOL)prepareForDelivery:(id *)a0;
- (id)_validateConfiguration;
- (BOOL)_shouldNotifyOnInsert;
- (void)_setSourceRevision:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (long long)hk_integerValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_externalSyncObjectCode;
- (id)_valueDescription;
- (void)_setDevice:(id)a0;

@end
