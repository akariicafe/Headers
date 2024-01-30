@class NSString, NSDictionary, NSManagedObjectContext;

@interface PLGlobalValues : NSObject {
    NSManagedObjectContext *_moc;
}

@property (nonatomic) BOOL didImportFileSystemAssets;
@property (nonatomic, getter=isJournalRebuildRequired) BOOL journalRebuildRequired;
@property (readonly, nonatomic) BOOL isRebuildComplete;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDictionary *greenValues;
@property (readonly, nonatomic) unsigned long long libraryCreateOptions;

+ (void)setJournalRebuildRequired:(BOOL)a0 managedObjectContext:(id)a1;
+ (void)setLibraryCreateOptions:(unsigned long long)a0 managedObjectContext:(id)a1;

- (BOOL)shouldPrefetchWidgetResources;
- (void).cxx_destruct;
- (void)dontImportFileSystemDataIntoDatabase;
- (id)initWithManagedObjectContext:(id)a0;
- (void)setRebuildComplete;
- (void)_setDidImportFileSystemAssets:(BOOL)a0;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (void)_setRebuildComplete;
- (void)_setValueUsingPerformBlockAndWait:(id /* block */)a0 responsibleCaller:(const char *)a1;
- (id)_getValueUsingPerformBlockAndWait:(id /* block */)a0;

@end
