@class NSString, NSPredicate;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSPredicate *searchPredicate;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) int timeLimit;
@property (weak, nonatomic) id<DASearchQueryConsumer> consumer;

+ (id)searchQueryWithSearchString:(id)a0 consumer:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)sendFinishedToConsumerWithError:(id)a0;
- (void)sendResultsToConsumer:(id)a0;
- (id)initWithSearchString:(id)a0 consumer:(id)a1;
- (id)initWithSearchString:(id)a0 predicate:(id)a1 consumer:(id)a2;
- (id)initWithDictionaryRepresentation:(id)a0 consumer:(id)a1;
- (BOOL)isQueryRunning;

@end
