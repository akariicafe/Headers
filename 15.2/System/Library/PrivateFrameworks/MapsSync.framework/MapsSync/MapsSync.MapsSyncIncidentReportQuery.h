@class OS_os_log;

@interface MapsSync.MapsSyncIncidentReportQuery : MapsSync.MapsSyncBaseQuery {
    void /* unknown type, empty encoding */ _specifiedQuery;
}

@property (class, nonatomic, readonly) OS_os_log *signpostLog;

- (id)initWithDelegate:(id)a0;
- (void)fetchContents:(id /* block */)a0;
- (id)initWithQueryDelegate:(id)a0 predicate:(id)a1;
- (id)initWithOptions:(id)a0 delegate:(id)a1;
- (void)fetchContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchQueryContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchQueryContents:(id /* block */)a0;

@end
