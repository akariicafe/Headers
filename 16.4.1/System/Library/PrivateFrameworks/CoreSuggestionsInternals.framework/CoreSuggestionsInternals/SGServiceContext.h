@class SGSqlEntityStore;

@interface SGServiceContext : NSObject

@property (readonly, nonatomic) SGSqlEntityStore *store;

- (id)initWithStore:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
