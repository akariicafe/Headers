@class NSArray, NSString;

@interface CNiOSABAccountIdentifiersPredicate : CNPredicate <CNiOSAccountPredicate>

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyAccountsInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
