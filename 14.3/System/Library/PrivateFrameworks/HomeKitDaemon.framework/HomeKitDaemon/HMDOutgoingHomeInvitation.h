@class NSArray, NSString, NSUUID, HMDUser;
@protocol HMFLocking;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol> {
    id<HMFLocking> _lock;
}

@property (retain, nonatomic) NSArray *operationIdentifiers;
@property (retain, nonatomic) NSString *inviteeDestinationAddress;
@property (readonly, nonatomic) NSArray *accessoryInvitationsInformation;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL responseReceived;
@property (readonly, nonatomic) NSUUID *messageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)cancel;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)updateInvitationState:(long long)a0;
- (BOOL)refreshDisplayName;
- (void)notifyStateChangedForMessage:(id)a0;
- (id)describeWithFormat;
- (id)initWithUUID:(id)a0 invitee:(id)a1 invitationState:(long long)a2 forHome:(id)a3 expiryDate:(id)a4 messageIdentifier:(id)a5;
- (void)_transactionOutgoingInvitiationUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateUser:(id)a0;
- (void)processUserManagementOperationIdentifiers:(id)a0;
- (void)updateUserManagementOperations:(id)a0;
- (id)emptyModelObjectWithChangeType:(unsigned long long)a0;
- (id)initWithInvitee:(id)a0 invitationState:(long long)a1 forHome:(id)a2 expiryDate:(id)a3 messageIdentifier:(id)a4;

@end
