@class NSString;

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate>

@property (readonly) unsigned long long suggestionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (BOOL)cn_supportsNativeSorting;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuggestionIdentifier:(unsigned long long)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;

@end
