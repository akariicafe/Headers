@class NSString, NSNumber, EDAMUserIdentity;

@interface EDAMInvitationShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) EDAMUserIdentity *recipientUserIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
