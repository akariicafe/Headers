@class NSURL, PHAssetRepresentation;

@interface PHAssetWriter : NSObject

@property (retain, nonatomic) PHAssetRepresentation *assetRepresentation;
@property (retain, nonatomic) NSURL *sourceUrl;
@property BOOL stop;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL networkAccessAllowed;

+ (id)assetWriterForIdentifierURL:(id)a0;
+ (id)assetWriterForAssetRepresentation:(id)a0;

- (id)transfer;
- (id)write;
- (id)request;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0;
- (void)stopWriting;
- (id)initWithAssetRepresentation:(id)a0;
- (unsigned long long)estimatedOutputSizeWithError:(id *)a0;
- (void)startWritingWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
