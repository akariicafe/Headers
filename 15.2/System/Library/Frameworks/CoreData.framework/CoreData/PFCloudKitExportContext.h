@class NSMutableArray, PFCloudKitExporterOptions;

@interface PFCloudKitExportContext : NSObject {
    PFCloudKitExporterOptions *_options;
    unsigned long long _totalBytes;
    unsigned long long _totalRecords;
    unsigned long long _totalRecordIDs;
    NSMutableArray *_writtenAssetURLs;
}

- (BOOL)checkForObjectsNeedingExportInStore:(id)a0 andReturnCount:(unsigned long long *)a1 withManagedObjectContext:(id)a2 error:(id *)a3;
- (BOOL)processAnalyzedHistoryInStore:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (id)initWithOptions:(id)a0;
- (void)dealloc;

@end
