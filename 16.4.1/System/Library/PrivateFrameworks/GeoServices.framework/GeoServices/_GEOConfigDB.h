@class GEOSQLiteDB, _GEOConfigDBOperationQueue;

@interface _GEOConfigDB : _GEOConfigCache {
    _Atomic long long _lastId;
}

@property (readonly, nonatomic) GEOSQLiteDB *db;
@property (readonly, nonatomic) _GEOConfigDBOperationQueue *operationQueue;
@property (readonly, nonatomic) void /* function */ *clearFunction;
@property (readonly, nonatomic) void /* function */ *setFunction;
@property (readonly, nonatomic) void /* function */ *addFunction;

- (id)init:(id)a0 cache:(id)a1 operationQueue:(id)a2 clearFunction:(void /* function */ *)a3 setFunction:(void /* function */ *)a4 addFunction:(void /* function */ *)a5 tableName:(id)a6;
- (long long)nextId;
- (void).cxx_destruct;

@end
