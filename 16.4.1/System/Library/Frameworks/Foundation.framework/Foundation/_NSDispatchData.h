@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getBytes:(void *)a0;
- (BOOL)_allowsDirectEncoding;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_providesConcreteBacking;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (BOOL)_isDispatchData;
- (id)_createDispatchData;
- (unsigned long long)hash;

@end
