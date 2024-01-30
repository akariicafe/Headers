@class NSString, NSURL;

@interface PHMediaFormatConversionContent : NSObject {
    unsigned long long _length;
    NSString *_fileSignature;
}

@property (readonly) NSString *fileSignature;
@property long long mediaType;
@property (retain) NSURL *fileURL;
@property (readonly) unsigned long long length;
@property (readonly) NSString *fileType;

- (void).cxx_destruct;
- (BOOL)isVideo;
- (BOOL)isImage;
- (id)description;
- (BOOL)isAssetBundle;
- (id)typeIdentifierFromFileExtensionWithError:(id *)a0;

@end
