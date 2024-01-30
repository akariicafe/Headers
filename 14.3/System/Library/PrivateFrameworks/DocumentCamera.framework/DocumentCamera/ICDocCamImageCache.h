@class NSMutableDictionary, NSURL, DCLRUCache, NSObject;
@protocol OS_dispatch_queue, DCDataCryptorDelegate;

@interface ICDocCamImageCache : NSObject

@property (readonly, nonatomic) NSURL *cachesDirectoryURL;
@property (readonly, nonatomic) NSURL *docCamImageDirectoryURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue;
@property (retain, nonatomic) DCLRUCache *inMemoryImageCache;
@property (retain, nonatomic) NSMutableDictionary *imageSizeCache;
@property (retain, nonatomic) id<DCDataCryptorDelegate> dataCryptorDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationWillTerminate:(id)a0;
- (id)getImageURL:(id)a0 async:(BOOL)a1;
- (struct CGSize { double x0; double x1; })getImageSize:(id)a0;
- (id)getImage:(id)a0;
- (id)setImage:(id)a0 metaData:(id)a1;
- (BOOL)replaceImage:(id)a0 metaData:(id)a1 uuid:(id)a2;
- (id)setImage:(id)a0 metaData:(id)a1 addToMemoryCache:(BOOL)a2;
- (BOOL)deleteImage:(id)a0;
- (id)initWithDataCryptorDelegate:(id)a0;
- (BOOL)deleteAllImages;
- (id)initWithDataCryptorDelegate:(id)a0 cachesDirectoryURL:(id)a1;
- (BOOL)makeSureScanDirectoryExists:(id *)a0;
- (id)getImageURL:(id)a0;
- (id)createNSDataFrom:(id)a0 metaData:(id)a1;
- (void)clearInMemoryCache;

@end
