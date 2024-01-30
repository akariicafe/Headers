@class NSString;

@interface CNiOSABGroupiOSLegacyIdentifierPredicate : CNPredicate <CNiOSGroupPredicate>

@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (struct __CFArray { } *)cn_copyGroupsInAddressBook:(void *)a0 error:(struct __CFError **)a1;
- (id)initWithiOSLegacyIdentifier:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
