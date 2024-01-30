@class SPZKWSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPUISearchModelZKW : SPUISearchModel {
    NSObject<OS_dispatch_queue> *_queryProcessor;
    BOOL _shouldCacheResults;
    BOOL _newQuery;
}

@property (retain, nonatomic) SPZKWSession *session;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithQueryContext:(id)a0;
- (void)dealloc;

@end
