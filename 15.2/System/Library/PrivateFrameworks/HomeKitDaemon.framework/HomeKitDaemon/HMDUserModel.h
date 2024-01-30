@class NSString, NSDictionary, HMDAccountHandle, NSArray, HMDAccountIdentifier, NSNumber;

@interface HMDUserModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSString *relayIdentifier;
@property (retain, nonatomic) NSArray *relayAccessTokens;
@property (retain, nonatomic) NSString *changeTag;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, nonatomic) NSNumber *announceAccessLevel;

+ (id)properties;

- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
