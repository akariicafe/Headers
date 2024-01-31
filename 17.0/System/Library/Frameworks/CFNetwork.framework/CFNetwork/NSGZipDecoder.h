@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _stream;
    unsigned long long _modificationTime;
    NSString *_filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)fileAttributes;
- (id)decodeData:(id)a0;
- (BOOL)decodeDownloadData:(id)a0 dataForkData:(id *)a1 resourceForkData:(id *)a2;
- (id)filenameWithOriginalFilename:(id)a0;
- (BOOL)finishDownloadDecoding;
- (BOOL)isFinishedDecoding;

@end
