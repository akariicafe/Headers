@class NSUUID, HMBLocalZone, NSString;

@interface HMBModelReference : HMFObject <HMBModelObjectCoder, NSSecureCoding, HMBQueryableModelFieldCoder>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMBLocalZone *localZone;
@property (readonly, nonatomic) NSUUID *hmbModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)a0;
+ (id)hmbEncodeQueryableParameter:(id)a0;
+ (id)hmbDecodeQueryableParameter:(id)a0;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)initWithModelID:(id)a0;
- (void)associateWithContainer:(id)a0;
- (id)isValidForContainer:(id)a0 updatedModelIDs:(id)a1;
- (id)referencedModelFromLocalZone:(id)a0 error:(id *)a1;

@end
