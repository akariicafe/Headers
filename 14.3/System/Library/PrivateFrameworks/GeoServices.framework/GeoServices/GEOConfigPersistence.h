@class _GEOConfigDBOperationQueue, GEOSQLiteDB, _GEOConfigDB;

@interface GEOConfigPersistence : NSObject {
    GEOSQLiteDB *_db;
    _GEOConfigDB *_configDB;
    _GEOConfigDBOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) GEOConfigPersistence *shared;

+ (BOOL)_setup:(id)a0;

- (void)setDefault:(id)a0 forKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)defaultForKeyPath:(id)a0;
- (void)dealloc;
- (id)defaultForKeyPathComponents:(id)a0;
- (id)initWithDBPath:(id)a0;
- (void)tearDown;

@end
