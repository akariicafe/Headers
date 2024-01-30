@interface SPRDER : NSObject

+ (id)DERDecodeData:(id)a0;
+ (id)DERDecodeData:(id)a0 expectedTag:(unsigned long long)a1;
+ (BOOL)DERDecodeSequenceWithData:(id)a0 block:(id /* block */)a1;
+ (id)DEREncodeData:(id)a0 tag:(unsigned long long)a1;
+ (id)DERParseScriptInfo:(id)a0;
+ (id)DERDecodeData:(id)a0 expectedSingleByteTag:(unsigned char)a1;
+ (BOOL)DERDecodeSequenceContentWithData:(id)a0 block:(id /* block */)a1;
+ (id)DEREncodeData:(id)a0 singleByteTag:(unsigned char)a1;
+ (BOOL)DERParseSEFWSequence:(struct { char *x0; unsigned long long x1; } *)a0 info:(struct { struct { char *x0; unsigned long long x1; } x0; struct { char *x0; unsigned long long x1; } x1; } *)a1;
+ (BOOL)DERParseScriptSequence:(struct { char *x0; unsigned long long x1; } *)a0 info:(struct { struct { char *x0; unsigned long long x1; } x0; struct { char *x0; unsigned long long x1; } x1; struct { char *x0; unsigned long long x1; } x2; struct { char *x0; unsigned long long x1; } x3; struct { char *x0; unsigned long long x1; } x4; struct { char *x0; unsigned long long x1; } x5; } *)a1;

@end
