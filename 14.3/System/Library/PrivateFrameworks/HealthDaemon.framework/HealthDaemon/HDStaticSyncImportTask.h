@class NSURL;

@interface HDStaticSyncImportTask : HDStaticSyncTask {
    NSURL *_importDirectoryURL;
}

+ (BOOL)_extractChangeArchive:(id)a0 syncStore:(id)a1 profile:(id)a2 progress:(id)a3 error:(id *)a4;
+ (id)_extractChangesFromExtractor:(id)a0 error:(id *)a1;
+ (BOOL)_applySyncChanges:(id)a0 store:(id)a1 profile:(id)a2 progress:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)runWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2 URL:(id)a3;
- (void)_queue_importStaticSyncChangesFromDirectory:(id)a0 syncStore:(id)a1 progress:(id)a2 completion:(id /* block */)a3;

@end
