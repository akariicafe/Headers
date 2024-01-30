@class NSString, CKContainerID, NSUUID;

@interface HMBCloudID : HMFObject <HMBModelObjectStorage, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) long long scope;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *modelID;

+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;

- (id)initWithContainerID:(id)a0 scope:(long long)a1;
- (id)initWithContainerID:(id)a0 scope:(long long)a1 name:(id)a2 modelID:(id)a3;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
