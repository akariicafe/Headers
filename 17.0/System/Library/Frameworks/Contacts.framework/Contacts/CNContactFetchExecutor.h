@class CNContactStore, CNContactFetchRequest;

@interface CNContactFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNContactFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)run:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 store:(id)a1;

@end
