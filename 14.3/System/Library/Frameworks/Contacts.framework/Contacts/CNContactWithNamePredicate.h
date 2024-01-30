@class NSString;

@interface CNContactWithNamePredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long options;

+ (id)descriptionForOptions:(unsigned long long)a0;
+ (BOOL)supportsSecureCoding;
+ (BOOL)doesPerson:(id)a0 matchName:(id)a1;

- (id)initWithName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)sgContactMatchesWithSortOrder:(long long)a0 mutableObjects:(BOOL)a1 service:(id)a2 error:(id *)a3;
- (BOOL)isEqual:(id)a0;
- (id)contactsFromCLSDataStore:(id)a0;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
