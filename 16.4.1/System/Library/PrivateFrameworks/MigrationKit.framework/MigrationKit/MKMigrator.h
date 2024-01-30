@class NSMutableSet, MKImportAnalytics;
@protocol MKMigratorDelegate;

@interface MKMigrator : NSObject {
    unsigned long long _importCount;
    unsigned long long _importErrorCount;
    unsigned long long _size;
    NSMutableSet *_importErrors;
    MKImportAnalytics *_analytics;
}

@property (weak, nonatomic) id<MKMigratorDelegate> delegate;
@property (nonatomic) long long type;

+ (void)initialize;

- (void)cancel;
- (unsigned long long)size;
- (void).cxx_destruct;
- (void)sendAnalytics;
- (void)addError:(id)a0;
- (void)import;
- (unsigned long long)importCount;
- (unsigned long long)importErrorCount;
- (void)migratorDidFailWithImportError:(id)a0;
- (void)migratorDidAppendDataSize:(unsigned long long)a0;
- (void)migratorDidFailWithImportError:(id)a0 count:(unsigned long long)a1;
- (void)migratorDidImport;
- (void)migratorDidImportWithCount:(unsigned long long)a0;

@end
