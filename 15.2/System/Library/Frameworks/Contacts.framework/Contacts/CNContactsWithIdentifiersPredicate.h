@class NSString, NSArray, NSMutableDictionary;

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSMutableDictionary *_internalIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *identifiers;

+ (BOOL)supportsSecureCoding;

- (BOOL)cn_supportsNativeSorting;
- (id)initWithIdentifiers:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)contactsFromDonationStore:(id)a0;
- (id)suggestionsWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)internalIdentifiersForStoreWithIdentifier:(id)a0;

@end
