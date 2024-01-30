@class SGSqlEntityStore;

@interface SGServiceContext : NSObject

@property (readonly, nonatomic) SGSqlEntityStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
