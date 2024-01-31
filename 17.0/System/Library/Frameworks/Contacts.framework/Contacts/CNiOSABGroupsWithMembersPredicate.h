@class NSArray, NSString;

@interface CNiOSABGroupsWithMembersPredicate : CNPredicate <CNiOSGroupPredicate>

@property (readonly, copy, nonatomic) NSArray *recordIdentifiers;
@property (readonly, nonatomic) unsigned int recordType;
@property (readonly, nonatomic) BOOL includeAllParentGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyGroupsInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (id)initWithContact:(id)a0 includeAllParentGroups:(BOOL)a1;
- (id)initWithGroup:(id)a0 includeAllParentGroups:(BOOL)a1;

@end
