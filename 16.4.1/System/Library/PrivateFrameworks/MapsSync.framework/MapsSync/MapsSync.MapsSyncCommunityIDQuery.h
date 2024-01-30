@class OS_os_log;

@interface MapsSync.MapsSyncCommunityIDQuery : MapsSync.MapsSyncBaseQuery {
    void /* unknown type, empty encoding */ _specifiedQuery;
}

@property (class, nonatomic, readonly) OS_os_log *signpostLog;

- (void)fetchContents:(id /* block */)a0;
- (void)fetchQueryContents:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)fetchQueryContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithOptions:(id)a0 delegate:(id)a1;
- (void)fetchContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithQueryDelegate:(id)a0 predicate:(id)a1;

@end
