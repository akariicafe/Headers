@class NSURL;

@interface HDFileArchiver : NSObject {
    NSURL *_sourceURL;
    NSURL *_prefixURL;
    NSURL *_destinationDirectoryURL;
    struct archive { } *_reader;
    struct archive { } *_writer;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _nullBuffer;
}

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)decompressArchiveAt:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)_copyDataForEntry:(struct archive_entry { } *)a0 error:(id *)a1;
- (const char *)_stripLeadingPathComponents:(const char *)a0;
- (BOOL)_writeEntry:(struct archive_entry { } *)a0 error:(id *)a1;
- (BOOL)_writeArchive:(id *)a0;
- (id)errorFromReaderWithContext:(id)a0;
- (BOOL)_readArchive:(id *)a0;
- (BOOL)compressFileAtURL:(id)a0 to:(id)a1 strippingPathPrefix:(id)a2 error:(id *)a3;

@end
