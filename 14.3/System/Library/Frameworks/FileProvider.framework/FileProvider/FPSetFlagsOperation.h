@protocol NSFileProviderItemFlags;

@interface FPSetFlagsOperation : FPTransformOperation {
    id<NSFileProviderItemFlags> _flags;
}

- (void).cxx_destruct;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithItems:(id)a0 flags:(id)a1;
- (id)fp_prettyDescription;

@end
