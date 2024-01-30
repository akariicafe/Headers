@class geo_isolater, GEODefaultsDBDict, GEOSQLiteDB, _GEOConfigDBOperationQueue;

@interface _GEOConfigDB : NSObject {
    GEODefaultsDBDict *_cache;
    geo_isolater *_isolator;
    _Atomic long long _lastId;
}

@property (readonly, nonatomic) GEOSQLiteDB *db;
@property (readonly, nonatomic) _GEOConfigDBOperationQueue *operationQueue;
@property (readonly, nonatomic) void /* function */ *clearFunction;
@property (readonly, nonatomic) void /* function */ *setFunction;
@property (readonly, nonatomic) void /* function */ *addFunction;

- (void).cxx_destruct;
- (id)init:(id)a0 cache:(id)a1 operationQueue:(id)a2 clearFunction:(void /* function */ *)a3 setFunction:(void /* function */ *)a4 addFunction:(void /* function */ *)a5 tableName:(id)a6;
- (void)withCache:(id /* block */)a0;
- (long long)nextId;

@end
