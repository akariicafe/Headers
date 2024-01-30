@class NSString;

@interface CNiOSABDisabledContainersPredicate : CNPredicate <CNiOSContainerPredicate>

@property (readonly, nonatomic) BOOL includesDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyContainersInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (id)initWithDisabledContainersIncluded:(BOOL)a0;

@end
