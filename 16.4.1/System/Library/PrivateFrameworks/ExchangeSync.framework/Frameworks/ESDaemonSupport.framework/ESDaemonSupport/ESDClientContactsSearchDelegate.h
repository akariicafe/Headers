@class NSData, DASearchQuery;

@interface ESDClientContactsSearchDelegate : ESDClientDelegate <DASearchQueryConsumer>

@property (retain, nonatomic) DASearchQuery *query;
@property (retain, nonatomic) NSData *queryResultData;

- (void)finishWithError:(id)a0;
- (void)disable;
- (void)dealloc;
- (void).cxx_destruct;
- (void)searchQuery:(id)a0 finishedWithError:(id)a1;
- (void)searchQuery:(id)a0 returnedResults:(id)a1;
- (void)beginQuery;
- (id)initWithAccountID:(id)a0 queryDictionary:(id)a1 client:(id)a2;

@end
