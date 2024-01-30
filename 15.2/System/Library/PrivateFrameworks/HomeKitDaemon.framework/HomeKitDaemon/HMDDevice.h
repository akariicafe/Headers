@class HMFProductInfo, Protocol, HMDDeviceCapabilities, HMDAccount, HMFNetService, HMDRPIdentity, NSString, NSSet, HMFUnfairLock, NSArray, NSData, HMDHomeKitVersion, NSUUID;
@protocol HMFCancellable, NSCopying;

@interface HMDDevice : HMFObject <HMFObject, HMFLogging, HMDBackingStoreObjectProtocol, HMCBacked, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, HMFMerging, NSSecureCoding> {
    HMFUnfairLock *_lock;
    NSSet *_handles;
    HMFNetService *_observedNetService;
    id<HMFCancellable> _netServiceKVOCancellation;
    BOOL _lastKnownIsPublishingStateValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *identities;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (copy) HMFProductInfo *productInfo;
@property (copy, setter=setIDSIdentifierHash:) NSUUID *idsIdentifierHash;
@property (weak) HMDAccount *account;
@property (getter=isDirty) BOOL dirty;
@property (getter=isLocallyTracked) BOOL locallyTracked;
@property (getter=isCloudTracked) BOOL cloudTracked;
@property (copy) HMDDeviceCapabilities *capabilities;
@property (readonly, copy) NSData *pushToken;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) HMDHomeKitVersion *version;
@property (copy) HMDRPIdentity *rpIdentity;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Protocol *backingModelType;
@property (readonly) id<NSCopying> backingModelKey;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;

+ (id)logCategory;
+ (id)destinationForDevice:(id)a0 service:(id)a1;
+ (id)deviceWithDestination:(id)a0;
+ (id)deviceWithHandle:(id)a0;

- (void)setHandles:(id)a0;
- (id)handles;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void)setName:(id)a0;
- (void)setVersion:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)mergeObject:(id)a0;
- (id)initWithObjectModel:(id)a0;
- (BOOL)isBackingStorageEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 handles:(id)a1 name:(id)a2 productInfo:(id)a3 version:(id)a4 capabilities:(id)a5;
- (id)localHandles;
- (id)initWithService:(id)a0 device:(id)a1;
- (id)deviceForIDSService:(id)a0;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)remoteDestinationString;
- (void)startObservingIsPublishingForService:(id)a0;
- (BOOL)updateBackingModel:(id)a0 error:(id *)a1;
- (id)globalHandles;
- (id)initWithBackingModel:(id)a0;
- (BOOL)isRelatedToDevice:(id)a0;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)__updateDeviceWithActions:(id)a0;
- (void)updateVersion:(id)a0;
- (void)updateWithDevice:(id)a0;
- (BOOL)isPublishingOnObservedNetService;
- (id)backingModelPrimaryKey;
- (void)__handleAccountHandleUpdated:(id)a0;

@end
