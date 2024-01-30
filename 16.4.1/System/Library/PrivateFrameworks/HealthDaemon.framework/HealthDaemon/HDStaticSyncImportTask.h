@class NSURL;

@interface HDStaticSyncImportTask : HDStaticSyncTask {
    NSURL *_importDirectoryURL;
}

- (id)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2 URL:(id)a3;

@end
