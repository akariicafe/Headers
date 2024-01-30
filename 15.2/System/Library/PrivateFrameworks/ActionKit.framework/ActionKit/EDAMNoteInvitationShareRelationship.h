@class NSString, NSNumber;

@interface EDAMNoteInvitationShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientIdentityId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
