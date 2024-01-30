@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}

@property (class, readonly, nonatomic) GEOLocationShifterPersistence *sharedPersister;

- (void)removeAllEntries;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_setup:(id)a0;
- (void)tearDown;
- (void)storeResponse:(id)a0;
- (id)initWithDBFilePath:(id)a0;
- (void)removeAllEntriesSync;
- (void)findResponseForCoordinate:(struct { double x0; double x1; })a0 reduceRadius:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)getAllEntries:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)pruneEntriesOlderThan:(id)a0 maximumEntriesToKeep:(int)a1;

@end
