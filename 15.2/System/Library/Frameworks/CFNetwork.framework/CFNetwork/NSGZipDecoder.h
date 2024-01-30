@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _stream;
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

- (BOOL)decodeDownloadData:(id)a0 dataForkData:(id *)a1 resourceForkData:(id *)a2;
- (id)decodeData:(id)a0;
- (BOOL)finishDownloadDecoding;
- (BOOL)isFinishedDecoding;
- (id)fileAttributes;
- (id)filenameWithOriginalFilename:(id)a0;
- (id)init;
- (void)dealloc;

@end
