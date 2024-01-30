@class NSString, NSDate;

@interface DAMailboxSearchQuery : DASearchQuery

@property (retain, nonatomic) NSString *collectionID;
@property (nonatomic) int bodyType;
@property (nonatomic) long long truncationSize;
@property (nonatomic) BOOL allOrNone;
@property (retain, nonatomic) NSDate *priorToDate;
@property (nonatomic) int MIMESupport;
@property (nonatomic) BOOL deepTraversal;
@property (nonatomic) BOOL rebuildResults;

+ (id)mailboxSearchQueryWithSearchString:(id)a0 predicate:(id)a1 consumer:(id)a2;
+ (id)mailboxSearchQueryWithSearchString:(id)a0 consumer:(id)a1;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 consumer:(id)a1;
- (id)initWithSearchString:(id)a0 consumer:(id)a1;
- (id)initWithSearchString:(id)a0 predicate:(id)a1 consumer:(id)a2;

@end
