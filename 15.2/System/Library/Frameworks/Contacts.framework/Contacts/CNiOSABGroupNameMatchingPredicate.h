@class NSString;

@interface CNiOSABGroupNameMatchingPredicate : CNPredicate <CNiOSGroupPredicate>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)tokenizeString:(id)a0;
+ (id)groupNameTokenizingCharacterSet;

- (void)encodeWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyGroupsInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)groupName:(id)a0 matchesSearchTokens:(id)a1;

@end
