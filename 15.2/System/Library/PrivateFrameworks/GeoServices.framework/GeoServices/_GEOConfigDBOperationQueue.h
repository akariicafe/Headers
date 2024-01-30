@class NSObject, GEOSQLiteDB, geo_isolater, NSMutableArray;
@protocol OS_dispatch_source;

@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB *_db;
    geo_isolater *_isolator;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_source> *_timer;
}

- (id)init:(id)a0;
- (void)flush;
- (void)enqueueOperation:(id)a0;
- (void)scheduleTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelTimer;

@end
