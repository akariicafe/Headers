@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    unsigned long long _errorOptions;
}

@property (nonatomic) BOOL captureProgramAddressTable;

- (BOOL)retainedReferences;
- (void)setErrorOptions:(unsigned long long)a0;
- (unsigned long long)errorOptions;
- (void)setRetainedReferences:(BOOL)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
