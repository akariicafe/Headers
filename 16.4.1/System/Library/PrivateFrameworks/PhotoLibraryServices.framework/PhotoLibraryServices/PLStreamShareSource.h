@class PFVideoComplement, NSString, NSData, NSURL, PLSandboxedURL;

@interface PLStreamShareSource : NSObject {
    PLSandboxedURL *_sandboxedMediaURL;
    PLSandboxedURL *_sandboxedVideoComplementImageURL;
    PLSandboxedURL *_sandboxedVideoComplementVideoURL;
}

@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) PFVideoComplement *videoComplement;
@property (nonatomic) long long mediaType;

- (id)photoLibrary;
- (id)initWithDictionary:(id)a0;
- (id)serializedDictionary;
- (void).cxx_destruct;
- (void)_cleanupIfNeededMediaAtURL:(id)a0;
- (void)cleanupResources;

@end
