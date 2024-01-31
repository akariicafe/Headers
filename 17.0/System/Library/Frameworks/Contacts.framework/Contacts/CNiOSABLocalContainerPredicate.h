@class NSString;

@interface CNiOSABLocalContainerPredicate : CNPredicate <CNiOSContainerPredicate>

@property (readonly, nonatomic) BOOL includesDisabledContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithPredicate:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyContainersInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (BOOL)includesDisabledContainers;
- (id)initWithDisabledContainerIncluded:(BOOL)a0;

@end
