@class NSString, GEOSQLiteDB;

@interface _GEOConfigDBClearExpireOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    GEOSQLiteDB *_db;
    NSString *_keyPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performOperation;
- (void).cxx_destruct;
- (id)init:(id)a0 keyPath:(id)a1;

@end
