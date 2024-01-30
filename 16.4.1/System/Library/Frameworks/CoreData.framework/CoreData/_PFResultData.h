@interface _PFResultData : NSData {
    int _cd_rc;
    unsigned int _length;
    id _parentObject;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (void)setParentObject:(id)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToData:(id)a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (const void *)bytes;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (Class)classForCoder;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (void)dealloc;
- (id)init;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)mutableCopy;
- (unsigned long long)retainCount;

@end
