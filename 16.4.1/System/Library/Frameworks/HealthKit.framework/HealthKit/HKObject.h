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
@property (readonly, nonatomic) NSString *attachmentObjectIdentifier;
@property (readonly, nonatomic) NSString *attachmentSchemaIdentifier;
@property (readonly) NSUUID *UUID;
@property (readonly) HKSource *source;
@property (readonly) HKSourceRevision *sourceRevision;
@property (readonly) HKDevice *device;
@property (readonly, copy) NSDictionary *metadata;

+ (BOOL)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)a0 device:(id)a1 config:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)_setMetadata:(id)a0;
- (id)_source;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asJSONObject;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (void)_setUUID:(id)a0;
- (id)hk_UUID;
- (long long)hk_integerValue;
- (id)_copyByArchiving;
- (long long)_externalSyncObjectCode;
- (void)_setContributor:(id)a0;
- (void)_setDevice:(id)a0;
- (void)_setSourceRevision:(id)a0;
- (BOOL)_shouldNotifyOnInsert;
- (id)_validateConfiguration;
- (id)_validateConfigurationAllowingPrivateMetadata:(BOOL)a0 applicationSDKVersion:(unsigned int)a1;
- (void)_validateForCreation;
- (BOOL)_validateForSavingWithClientEntitlements:(id)a0 applicationSDKVersion:(unsigned int)a1 isAppleWatch:(BOOL)a2 error:(id *)a3;
- (id)_valueDescription;
- (BOOL)prepareForDelivery:(id *)a0;
- (BOOL)prepareForSaving:(id *)a0;

@end
