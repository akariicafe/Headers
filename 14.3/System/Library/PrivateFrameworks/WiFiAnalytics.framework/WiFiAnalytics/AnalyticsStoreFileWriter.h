@class AnalyticsStoreMOHandler;

@interface AnalyticsStoreFileWriter : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler;

- (id)init;
- (void).cxx_destruct;
- (id)writeAnalyticsStoreToFile;
- (id)batchedWriteAnalyticsStoreToFile:(unsigned long long)a0 maxAge:(unsigned long long)a1;
- (id)analyticsStoreFileWriterDirectory;
- (id)analyticsStoreFileWriterFilePath;
- (id)stringifyObjectWithPadding:(id)a0 padding:(id)a1 padToLength:(unsigned long long)a2;
- (void)stringifyManagedObjectsArray:(id)a0 titleString:(id *)a1 dataStringsArray:(id *)a2;
- (id)stringifyRelationship:(id)a0 name:(id *)a1;

@end
