@class NSURL;

@interface HDFileArchiver : NSObject {
    NSURL *_sourceURL;
    NSURL *_prefixURL;
    NSURL *_destinationDirectoryURL;
    struct archive { } *_reader;
    struct archive { } *_writer;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _nullBuffer;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)decompressArchiveAt:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)compressFileAtURL:(id)a0 to:(id)a1 strippingPathPrefix:(id)a2 error:(id *)a3;

@end
