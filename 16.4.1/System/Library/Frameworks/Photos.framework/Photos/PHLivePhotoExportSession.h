@class NSArray, NSURL;

@interface PHLivePhotoExportSession : NSObject

@property (readonly, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSURL *videoURL;

+ (BOOL)_canCreateLivePhotoWithURLs:(id)a0 outError:(id *)a1;
+ (BOOL)_identifyResourceURLs:(id)a0 outImageURL:(id *)a1 outVideoURL:(id *)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)_isOutputURLValid:(id)a0 withOptions:(id)a1 error:(out id *)a2;
- (id)initWithResourceFileURLs:(id)a0;
- (id)writeToFileURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
