@class NSString;

@interface CNiOSABContainerOfContactPredicate : CNPredicate <CNiOSContainerPredicate>

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithPredicate:(id)a0;
- (struct __CFArray { } *)cn_copyContainersInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (BOOL)includesDisabledContainers;
- (void)encodeWithCoder:(id)a0;

@end
