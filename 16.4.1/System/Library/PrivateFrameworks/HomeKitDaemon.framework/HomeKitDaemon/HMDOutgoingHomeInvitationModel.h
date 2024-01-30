@class NSArray, NSString, NSDictionary, NSUUID, NSDate, NSNumber, NSData;

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *user;
@property (retain, nonatomic) NSUUID *idsInvitationUUID;
@property (retain, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSString *accessCode;
@property (retain, nonatomic) NSData *shareToken;
@property (retain, nonatomic) NSUUID *pendingUserUUID;
@property (retain, nonatomic) NSNumber *invitationState;
@property (retain, nonatomic) NSDate *expiryDate;
@property (retain, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) NSNumber *responseReceived;
@property (retain, nonatomic) NSString *inviteeDestinationAddress;
@property (retain, nonatomic) NSArray *operations;
@property (retain, nonatomic) NSArray *operationIdentifiers;

+ (id)properties;

- (id)dependentUUIDs;
- (id)cd_generateValueForModelObjectFromManagedObject:(id)a0 modelObjectField:(id)a1 modelFieldInfo:(id)a2;
- (id)cd_generateValueForProperty:(id)a0 managedObjectField:(id)a1 context:(id)a2;

@end
