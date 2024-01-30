@class NSString;

@interface CNiOSABGroupNameMatchingPredicate : CNPredicate <CNiOSGroupPredicate>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (struct __CFArray { } *)cn_copyGroupsInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (void)encodeWithCoder:(id)a0;

@end
