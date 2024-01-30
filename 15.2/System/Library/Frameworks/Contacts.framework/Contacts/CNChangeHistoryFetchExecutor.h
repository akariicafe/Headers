@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)keysToFetch;
- (id)run:(id *)a0;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)countOfDeltaSync;
- (id)fetchCount:(id *)a0;
- (id)deltaSync;
- (id)description;
- (id)fetchEvents:(id *)a0;
- (void).cxx_destruct;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (BOOL)validateFetchRequest;
- (id)fullSync;

@end
