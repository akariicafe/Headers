@class NSArray, EDAMShareRelationshipRestrictions;

@interface EDAMShareRelationships : FATObject

@property (retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) NSArray *memberships;
@property (retain, nonatomic) EDAMShareRelationshipRestrictions *invitationRestrictions;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
