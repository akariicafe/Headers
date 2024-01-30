@interface FPSetFlagsOperation : FPTransformOperation {
    unsigned long long _flags;
}

- (id)fp_prettyDescription;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithItems:(id)a0 flags:(unsigned long long)a1;

@end
