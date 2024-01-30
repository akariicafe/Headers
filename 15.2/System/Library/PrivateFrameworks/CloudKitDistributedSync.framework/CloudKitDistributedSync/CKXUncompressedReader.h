@interface CKXUncompressedReader : CKXReaderBase <CKXReaderProtocol>

- (void)copyData:(void *)a0 forField:(unsigned long long)a1 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (unsigned long long)offsetForField:(unsigned long long)a0 inStruct:(unsigned long long)a1;
- (BOOL)referenceIsNull:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (unsigned long long)fixedSizeForStruct:(unsigned long long)a0;
- (long long)lengthForList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (BOOL)setData:(id)a0 error:(id *)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })rootStructWithType:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })referencedListForReference:(unsigned long long)a0 inStruct:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })referencedStructAtIndex:(long long)a0 inList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (void)copyData:(void *)a0 forList:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;

@end
