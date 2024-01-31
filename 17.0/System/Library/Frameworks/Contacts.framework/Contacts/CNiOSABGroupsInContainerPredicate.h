@class NSString;

@interface CNiOSABGroupsInContainerPredicate : CNPredicate <CNiOSGroupPredicate>

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContainerIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyGroupsInAddressBook:(void *)a0 error:(struct __CFError **)a1;

@end
