@class NSURL, OKDocument;

@interface OKDocumentImportOperation : OFNSOperation {
    OKDocument *_document;
    NSURL *_resourceURL;
    BOOL _opaque;
}

@property (retain, nonatomic) NSURL *temporaryDownloadedMediaFileURL;
@property (retain, nonatomic) NSURL *temporaryTranscodedMediaFileURL;
@property (retain, nonatomic) NSURL *temporaryThumbnailMediaFileURL;
@property (readonly, copy, nonatomic) NSURL *importedResourceURL;

- (void)dealloc;
- (id)init;
- (void)cancelOperation;
- (void)finishOperation;
- (unsigned long long)launchOperation;
- (void)cleanupOperation;
- (id)initWithDocument:(id)a0 resourceURL:(id)a1 importedResourceURL:(id)a2 opaque:(BOOL)a3;

@end
