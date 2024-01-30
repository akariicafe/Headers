@class NSString;

@interface WLLocalDataSource : NSObject <WLMigrationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_localSourceDataPath;
+ (id)_relativePathForAccount:(id)a0 migrator:(id)a1;
+ (id)_relativePathForSummary:(id)a0 migrator:(id)a1;
+ (BOOL)localDataExists;
+ (void)deleteLocalData;
+ (void)stashFileForSummary:(id)a0 migrator:(id)a1;
+ (void)stashData:(id)a0 forSummary:(id)a1 migrator:(id)a2;

- (void)dataForSummary:(id)a0 migrator:(id)a1 completion:(id /* block */)a2;
- (void)accountsDataForMigrator:(id)a0 completion:(id /* block */)a1;
- (void)summariesDataForAccount:(id)a0 migrator:(id)a1 completion:(id /* block */)a2;
- (void)itemSizeForSummary:(id)a0 migrator:(id)a1 completion:(id /* block */)a2;
- (void)fileForSummary:(id)a0 migrator:(id)a1 fileAccessor:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dataSegmentForSummary:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 migrator:(id)a2 completion:(id /* block */)a3;
- (void)updateUIWithProgress:(double)a0 logString:(id)a1 completion:(id /* block */)a2;

@end
