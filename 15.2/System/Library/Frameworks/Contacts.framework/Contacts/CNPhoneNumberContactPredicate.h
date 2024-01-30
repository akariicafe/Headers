@class NSString, NSArray, CNPhoneNumber;

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    BOOL _returnsMultipleResults;
    CNPhoneNumber *_phoneNumber;
    NSString *_prefixHint;
    NSString *_digits;
    NSString *_countryCode;
    NSArray *_groupIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (id)shortDebugDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
