@class NSObject, GEOSQLiteDB, geo_isolater, NSMutableArray;
@protocol OS_dispatch_source;

@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB *_db;
    geo_isolater *_isolator;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)enqueueOperation:(id)a0;
- (void)scheduleTimer;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTimer;
- (void)flush;

@end
