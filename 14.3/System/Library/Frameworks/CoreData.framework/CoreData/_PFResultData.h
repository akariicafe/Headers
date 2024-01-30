@interface _PFResultData : NSData {
    int _cd_rc;
    unsigned int _length;
    id _parentObject;
}

+ (Class)classForKeyedUnarchiver;

- (const void *)bytes;
- (unsigned long long)length;
- (id)init;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToData:(id)a0;
- (oneway void)release;
- (void)dealloc;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)retain;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setParentObject:(id)a0;
- (Class)classForCoder;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
