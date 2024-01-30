@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromPropertyList:(void *)a0;
+ (id)newBufferFromCFData:(struct __CFData { } *)a0;

- (void *)bytes;
- (BOOL)purgable;
- (id)copyXPCData;
- (struct __CFData { } *)copyCFData;
- (unsigned long long)length;
- (void)endAccessing;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (BOOL)validatePlist;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (BOOL)beginAccessing;

@end
