@class VUIEventDataSource;

@interface VUIRouterDataSource : NSObject

@property (retain, nonatomic) VUIEventDataSource *selectEventDataSource;
@property (retain, nonatomic) VUIEventDataSource *playEventDataSource;
@property (retain, nonatomic) VUIEventDataSource *contextMenuEventDataSource;

- (void).cxx_destruct;
- (id)initWithRouterData:(id)a0 viewElement:(id)a1 appContext:(id)a2;
- (id)initWithRouterData:(id)a0 prefetchedData:(id)a1;

@end
