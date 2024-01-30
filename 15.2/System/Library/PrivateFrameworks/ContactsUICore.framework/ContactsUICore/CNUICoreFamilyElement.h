@class NSArray, FAFamilyMember;

@interface CNUICoreFamilyElement : NSObject

@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) NSArray *matchingContacts;
@property (readonly, nonatomic) BOOL hasMatchingContacts;
@property (readonly, nonatomic) BOOL isParent;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0 matchingContacts:(id)a1;
- (BOOL)containsFamilyMember:(id)a0;

@end
