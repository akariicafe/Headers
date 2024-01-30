@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
    void *_bytes;
    unsigned long long _length;
    unsigned long long _mappedLength;
    unsigned long long _capacity;
    unsigned long long _threshold;
    char *_path;
    int _fd;
    unsigned long long _flushFrom;
    BOOL _flush;
    BOOL _immutable;
    BOOL _vm;
}

- (const void *)bytes;
- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (unsigned long long)length;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithLength:(unsigned long long)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (void)mf_makeImmutable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)appendData:(id)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)mf_immutable;
- (void)_mapMutableData:(BOOL)a0;
- (void)_flushToDisk:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (id)_initWithFd:(int)a0 path:(id)a1 mutable:(BOOL)a2;
- (void)setMappingThreshold:(unsigned int)a0;

@end
