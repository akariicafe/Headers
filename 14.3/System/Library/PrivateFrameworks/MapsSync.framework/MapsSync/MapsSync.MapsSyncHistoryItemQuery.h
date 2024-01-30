@class OS_os_log;

@interface MapsSync.MapsSyncHistoryItemQuery : MapsSync.MapsSyncBaseQuery {
    void /* unknown type, empty encoding */ _specifiedQuery;
}

@property (class, nonatomic, readonly) OS_os_log *signpostLog;

- (void).cxx_destruct;
- (void)fetchContents:(id /* block */)a0;
- (void)fetchContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchQueryContents:(id /* block */)a0;
- (void)fetchQueryContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0;
- (void)preFetchHook:(id /* block */)a0;
- (id)initWithQueryDelegate:(id)a0 predicate:(id)a1;

@end
