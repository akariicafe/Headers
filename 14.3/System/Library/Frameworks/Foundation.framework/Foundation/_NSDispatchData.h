@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (BOOL)_providesConcreteBacking;
- (BOOL)_isDispatchData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_allowsDirectEncoding;
- (id)_createDispatchData;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)getBytes:(void *)a0;

@end
