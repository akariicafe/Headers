@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned long long)a0;

- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithImmutableData:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)_initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 from:(id)a1 retainingParent:(BOOL)a2;
- (BOOL)mf_immutable;
- (id)_initWithData:(id)a0 maybeMutable:(BOOL)a1;
- (id)_initWithFile:(id)a0;

@end
