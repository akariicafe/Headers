@class IDSURI, NSUUID, NSString, CNContact, CKUserIdentityLookupInfo;

@interface HMDAccountHandle : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) IDSURI *URI;
@property (copy, nonatomic) NSUUID *modelParentIdentifier;
@property (getter=isLocallyTracked) BOOL locallyTracked;
@property (readonly) long long type;
@property (readonly, copy) NSString *value;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isLocal) BOOL local;
@property (readonly, copy) CNContact *contact;
@property (readonly, copy) CKUserIdentityLookupInfo *cloudKitLookupInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;

+ (id)logCategory;
+ (id)accountHandleForDestination:(id)a0;

- (id)initWithURI:(id)a0;
- (id)shortDescription;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectModel:(id)a0;
- (BOOL)isBackingStorageEqual:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)initWithURI:(id)a0 local:(BOOL)a1;
- (id)remoteDestinationString;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;

@end
