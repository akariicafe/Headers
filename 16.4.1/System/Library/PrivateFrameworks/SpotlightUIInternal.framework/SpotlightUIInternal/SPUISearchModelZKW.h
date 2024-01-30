@class SPZKWSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel {
    NSObject<OS_dispatch_queue> *_queryProcessor;
    BOOL _shouldCacheResults;
    BOOL _newQuery;
}

@property (retain, nonatomic) SPZKWSession *session;
@property (nonatomic) BOOL ignoreNextPartialUpdate;

- (void)didReceiveResponse:(id)a0;
- (void)updateWithQueryContext:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_refreshRequested;
- (void).cxx_destruct;

@end
