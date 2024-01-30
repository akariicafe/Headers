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

- (void)setLength:(unsigned long long)a0;
- (void)appendData:(id)a0;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void *)mutableBytes;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithLength:(unsigned long long)a0;
- (unsigned long long)length;
- (void)setMappingThreshold:(unsigned int)a0;
- (id)_initWithFd:(int)a0 path:(id)a1 mutable:(BOOL)a2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)mf_immutable;
- (id)initWithData:(id)a0;
- (void)mf_makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_flushToDisk:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (const void *)bytes;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)_mapMutableData:(BOOL)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
