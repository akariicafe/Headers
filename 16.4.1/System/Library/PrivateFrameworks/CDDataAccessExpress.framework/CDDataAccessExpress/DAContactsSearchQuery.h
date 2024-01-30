@class NSString;

@interface DAContactsSearchQuery : DASearchQuery

@property (copy, nonatomic) NSString *searchBase;
@property (copy, nonatomic) NSString *searchScope;
@property (nonatomic) BOOL includePhotos;
@property (nonatomic) BOOL calendarInitiated;

+ (id)contactsSearchQueryWithSearchString:(id)a0 searchBase:(id)a1 searchScope:(id)a2 consumer:(id)a3;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 consumer:(id)a1;
- (id)initWithSearchString:(id)a0 searchBase:(id)a1 searchScope:(id)a2 consumer:(id)a3;

@end
