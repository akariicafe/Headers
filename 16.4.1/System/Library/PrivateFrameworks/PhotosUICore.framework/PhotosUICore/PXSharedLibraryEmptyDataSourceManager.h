@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager

- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchSharedLibrary;
- (id)fetchPreview;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
