@class CKReference, NSString, HMBCloudZone;

@interface HMBModelCloudReference : HMBModelReference <HMBModelNativeCKWrapper, NSSecureCoding>

@property (class, readonly, nonatomic) BOOL includeInModelEncoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) CKReference *reference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;
+ (void)applyNativeCKValue:(id)a0 fromSource:(unsigned long long)a1 associatingWith:(id)a2 toModel:(id)a3 propertyNamed:(id)a4;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)nativeCKValueWithEncodingContext:(id)a0 error:(id *)a1;
- (void)associateWithContainer:(id)a0;
- (id)initWithModelID:(id)a0 action:(unsigned long long)a1;
- (id)referencedModelFromCloudZone:(id)a0 allowExternalFetch:(BOOL)a1;

@end
