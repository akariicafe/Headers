@class NSURL;

@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
}

- (void).cxx_destruct;
- (id)name;
- (BOOL)canReference;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (id)initWithUrls:(id)a0;
- (BOOL)isLibrary;
- (BOOL)isReadonlyVolume;
- (void)loadSidecarsFor:(id)a0;
- (id)productKind;

@end
