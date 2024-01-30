@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}

@property (class, readonly, nonatomic) GEOLocationShifterPersistence *sharedPersister;

- (void)tearDown;
- (id)initWithDBFilePath:(id)a0;
- (void)storeResponse:(id)a0;
- (void)pruneEntriesOlderThan:(id)a0 maximumEntriesToKeep:(int)a1;
- (void)findResponseForCoordinate:(struct { double x0; double x1; })a0 reduceRadius:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)removeAllEntriesSync;
- (void)getAllEntries:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)removeAllEntries;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_setup:(id)a0;

@end
