@class NSDictionary;

@interface CUBitCoder : NSObject

@property (copy, nonatomic) id /* block */ decryptHandler;
@property (copy, nonatomic) id /* block */ encryptHandler;
@property (copy, nonatomic) NSDictionary *schema;

- (void).cxx_destruct;
- (void)dealloc;
- (id)decodeBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)decodeBytes:(const void *)a0 length:(unsigned long long)a1 info:(id)a2 error:(id *)a3;
- (id)decodeData:(id)a0 error:(id *)a1;
- (id)decodeData:(id)a0 info:(id)a1 error:(id *)a2;
- (id)encodeFields:(id)a0 variantIdentifier:(id)a1 error:(id *)a2;
- (id)encodeFields:(id)a0 variantIdentifier:(id)a1 info:(id)a2 error:(id *)a3;
- (unsigned long long)_readValue:(struct __CFBitVector { } *)a0 bitCount:(unsigned int)a1 bitIndex:(unsigned int *)a2 err:(int *)a3;
- (void)_writeValue:(unsigned long long)a0 bitCount:(unsigned int)a1 bitVector:(struct __CFBitVector { } *)a2;
- (void)invalidate;

@end
