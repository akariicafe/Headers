@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)run:(id *)a0;
- (id)fetchEvents:(id *)a0;
- (id)keysToFetch;
- (BOOL)validateFetchRequest;
- (id)deltaSync;
- (id)countOfDeltaSync;
- (id)description;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)fetchCount:(id *)a0;
- (id)fullSync;

@end
