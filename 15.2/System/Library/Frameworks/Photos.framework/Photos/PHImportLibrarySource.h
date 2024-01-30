@class NSURL, PLPhotoLibraryPathManager, NSDictionary;

@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
}

@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;

- (BOOL)isLibrary;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (id)assetsByProcessingItem:(id)a0;
- (void).cxx_destruct;
- (id)productKind;
- (id)initWithUrls:(id)a0;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (id)name;
- (BOOL)canReference;
- (id)resourcePathsByUuidForPaths:(id)a0;
- (void)loadSidecarsFor:(id)a0;
- (BOOL)_isValidPhotoLibraryWithError:(id *)a0;

@end
