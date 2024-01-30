@class NSString, NSNumber, EDAMNoteShareRelationshipRestrictions;

@interface EDAMNoteMemberShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *restrictions;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
