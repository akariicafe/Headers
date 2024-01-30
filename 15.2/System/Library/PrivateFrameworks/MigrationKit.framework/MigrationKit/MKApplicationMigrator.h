@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MKApplicationMigrator : NSObject {
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 { } *_database;
    unsigned long long _totalCount;
    unsigned long long _matchedAppsCount;
}

@property (retain, nonatomic) NSMutableArray *identifiers;

- (void)close;
- (void)open;
- (unsigned long long)operationCount;
- (void)lookup:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)dealloc;
- (void)importDataEncodedInJSON:(id)a0;
- (void)drainQueue;
- (void)didLookup:(unsigned long long)a0 apps:(id)a1 error:(id)a2;
- (void)slice:(unsigned long long)a0;
- (void)insertApps:(unsigned long long)a0 apps:(id)a1;
- (void)insertData:(id)a0;

@end
