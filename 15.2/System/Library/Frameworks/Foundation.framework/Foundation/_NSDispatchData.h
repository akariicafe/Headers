@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (BOOL)_providesConcreteBacking;
- (BOOL)_allowsDirectEncoding;
- (void)encodeWithCoder:(id)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)getBytes:(void *)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_isDispatchData;
- (id)_createDispatchData;

@end
