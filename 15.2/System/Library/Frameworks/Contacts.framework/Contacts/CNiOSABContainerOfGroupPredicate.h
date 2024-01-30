@class NSString;

@interface CNiOSABContainerOfGroupPredicate : CNPredicate <CNiOSContainerPredicate>

@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithPredicate:(id)a0;
- (id)initWithGroupIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)includesDisabledContainers;
- (struct __CFArray { } *)cn_copyContainersInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
