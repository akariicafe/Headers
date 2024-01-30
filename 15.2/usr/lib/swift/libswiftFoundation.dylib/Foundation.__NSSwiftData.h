@interface Foundation.__NSSwiftData : NSData {
    void /* unknown type, empty encoding */ _backing;
    void /* unknown type, empty encoding */ _range;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) void *bytes;

- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBase64EncodedData:(id)a0 options:(unsigned long long)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithBytes:(void *)a0 length:(long long)a1;
- (id)initWithContentsOfMappedFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithBytesNoCopy:(void *)a0 length:(long long)a1 deallocator:(id /* block */)a2;
- (id)init;
- (id)initWithBase64EncodedString:(id)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
