@class NSString, NSArray;

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;
@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSearchString:(id)a0 containerIdentifiers:(id)a1 groupIdentifiers:(id)a2;

@end
