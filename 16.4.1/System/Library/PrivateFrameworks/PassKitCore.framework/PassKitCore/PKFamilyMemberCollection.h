@class PKFamilyMember, NSArray, NSDictionary, NSString;

@interface PKFamilyMemberCollection : NSObject

@property (readonly, copy, nonatomic) NSDictionary *familyMembersByAltDSID;
@property (readonly, copy, nonatomic) NSArray *familyMembers;
@property (readonly, nonatomic) PKFamilyMember *currentUser;
@property (readonly, copy, nonatomic) NSString *currentUserAltDSID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)familyMemberForAltDSID:(id)a0;
- (id)familyMemberForTransactionSource:(id)a0;
- (id)initWithFamilyMembers:(id)a0;

@end
