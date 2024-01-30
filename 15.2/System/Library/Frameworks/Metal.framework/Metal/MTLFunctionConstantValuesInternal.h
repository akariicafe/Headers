@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    void *_constantStorage;
}

- (id)newIndexedConstantArray;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 withName:(id)a2;
- (id)description;
- (id)newNamedConstantArray;
- (void *)serializedConstantDataForFunction:(id)a0 dataSize:(unsigned long long *)a1 errorMessage:(id *)a2;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setConstantValues:(const void *)a0 type:(unsigned long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (const void *)constantValueWithFunctionConstant:(id)a0;
- (void)reset;

@end
