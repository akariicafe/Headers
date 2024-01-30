@class NSArray, EDAMNoteShareRelationshipRestrictions;

@interface EDAMNoteShareRelationships : FATObject

@property (retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) NSArray *memberships;
@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *invitationRestrictions;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
