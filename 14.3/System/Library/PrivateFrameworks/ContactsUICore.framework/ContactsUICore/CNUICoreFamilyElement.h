@class NSArray, FAFamilyMember;

@interface CNUICoreFamilyElement : NSObject

@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) NSArray *matchingContacts;
@property (readonly, nonatomic) BOOL hasMatchingContacts;
@property (readonly, nonatomic) BOOL isParent;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFamilyMember:(id)a0 matchingContacts:(id)a1;
- (BOOL)containsFamilyMember:(id)a0;

@end
