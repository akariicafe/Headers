@class CNContactStore, CNContactFetchRequest;

@interface CNContactFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNContactFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)description;
- (id)run:(id *)a0;

@end
