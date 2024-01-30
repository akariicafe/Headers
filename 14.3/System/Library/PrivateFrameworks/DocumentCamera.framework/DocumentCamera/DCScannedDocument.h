@class NSString, NSMutableArray, NSURL;

@interface DCScannedDocument : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *docInfos;
@property (readonly, nonatomic) NSURL *scannedDocumentImageDirectoryURL;
@property (readonly, nonatomic) unsigned long long pageCount;

+ (void)initialize;
+ (id)scannedDocumentsFolderURL;

- (void).cxx_destruct;
- (unsigned long long)numberOfScans;
- (void)dealloc;
- (void)applicationWillTerminate:(id)a0;
- (id)imageOfPageAtIndex:(unsigned long long)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)getImage:(id)a0;
- (BOOL)deleteImage:(id)a0;
- (void)replaceContentsWithDocInfoCollection:(id)a0 imageCache:(id)a1;
- (void)deleteAllImages;
- (id)initWithDocInfoCollection:(id)a0 imageCache:(id)a1;
- (BOOL)copyImagesFromDocInfoCollection:(id)a0 imageCache:(id)a1;
- (id)pListURL:(id)a0;
- (id)copyImageForLoading:(id)a0 fromFolderURL:(id)a1;
- (id)copyImageForSaving:(id)a0 toFolderURL:(id)a1;
- (BOOL)makeSureScanDirectoryExists:(id *)a0;
- (id)URLForImageWithUUID:(id)a0;
- (id)URLForImageInFolder:(id)a0 withUUID:(id)a1;
- (id)copyImageAtURL:(id)a0;
- (id)getImageURL:(id)a0;
- (id)imageForScanAtIndex:(unsigned long long)a0 error:(id *)a1;

@end
