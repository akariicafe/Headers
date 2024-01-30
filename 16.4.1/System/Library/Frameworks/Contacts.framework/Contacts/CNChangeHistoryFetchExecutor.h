@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)fullSync;
- (id)keysToFetch;
- (BOOL)validateFetchRequest;
- (id)deltaSync;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)countOfDeltaSync;
- (id)fetchCount:(id *)a0;
- (id)fetchEvents:(id *)a0;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)run:(id *)a0;

@end
