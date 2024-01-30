@class NSString;

@interface CNiOSABGroupsInGroupPredicate : CNPredicate <CNiOSGroupPredicate>

@property (readonly, copy, nonatomic) NSString *parentGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParentGroupIdentifier:(id)a0;
- (struct __CFArray { } *)cn_copyGroupsInAddressBook:(void *)a0 error:(struct __CFError **)a1;

@end
