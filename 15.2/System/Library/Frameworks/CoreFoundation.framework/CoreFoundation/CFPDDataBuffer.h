@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;

- (unsigned long long)length;
- (id)copyXPCData;
- (BOOL)validatePlist;
- (void *)bytes;
- (BOOL)purgable;
- (struct __CFData { } *)copyCFData;
- (BOOL)beginAccessing;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (void)endAccessing;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;

@end
