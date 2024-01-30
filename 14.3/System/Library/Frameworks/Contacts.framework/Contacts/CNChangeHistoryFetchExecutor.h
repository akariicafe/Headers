@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)keysToFetch;
- (void).cxx_destruct;
- (id)deltaSync;
- (id)fullSync;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)description;
- (id)run:(id *)a0;

@end
