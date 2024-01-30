@class NSURL;

@interface HDStaticSyncImportTask : HDStaticSyncTask {
    NSURL *_importDirectoryURL;
}

- (void).cxx_destruct;
- (id)runWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2 URL:(id)a3;

@end
