@class CSSearchQuery, NSString, ICRankingQueriesDefinition, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ICSearchQuery : NSObject

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic) BOOL modernResultsOnly;
@property (retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (retain, nonatomic) NSArray *externalRankingQueries;
@property (retain, nonatomic) CSSearchQuery *searchQuery;
@property (retain, nonatomic) NSDictionary *queryResults;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) BOOL wasForceStopped;
@property (readonly, nonatomic) NSArray *rankingQueries;

+ (id)defaultAttributesToReturnFromCoreSpotlight;
+ (id)fetchModernNoteSearchableItemAttributesFromCoreDataForObjectIDURIs:(id)a0 context:(id)a1;
+ (id)fetchDefaultAttributesForIdentifiers:(id)a0;

- (BOOL)run:(id *)a0;
- (void)setup;
- (void)forceStop;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueryString:(id)a0 rankingQueriesDefinition:(id)a1 modernResultsOnly:(BOOL)a2;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(BOOL)a2;

@end
