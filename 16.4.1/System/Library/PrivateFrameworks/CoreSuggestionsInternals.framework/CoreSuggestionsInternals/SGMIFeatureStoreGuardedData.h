@class SGMIDomainCountingTable, _PASSqliteDatabase, NSMutableSet;

@interface SGMIFeatureStoreGuardedData : NSObject {
    _PASSqliteDatabase *_db;
    BOOL _dbIsMigrated;
    NSMutableSet *_columnsToZero;
    SGMIDomainCountingTable *_features;
}

- (void).cxx_destruct;

@end
