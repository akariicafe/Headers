@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}

+ (void)setDefaultMappingThresholdInBytes:(unsigned long long)a0;

- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (unsigned long long)length;
- (id)_initWithFile:(id)a0;
- (id)initWithImmutableData:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)mf_immutable;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (const void *)bytes;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)_initWithData:(id)a0 maybeMutable:(BOOL)a1;
- (id)init;
- (id)_initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 from:(id)a1 retainingParent:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)data;

@end
