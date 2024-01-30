@class NSMutableDictionary;

@interface PXGLoadingStatusComponent : PXGComponent <PXGMutableLoadingStatusComponent> {
    NSMutableDictionary *_errorByEntity;
}

@property (readonly, nonatomic) const struct { unsigned char x0; } *states;
@property (readonly, nonatomic) struct { unsigned char x0; } *mutableStates;

+ (unsigned long long)elementSize;
+ (BOOL)shouldDiffForChanges;

- (id)initWithDataStore:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setError:(id)a0 forEntity:(struct { unsigned int x0; })a1;
- (struct { unsigned char x0; })stateForEntity:(struct { unsigned int x0; })a0;
- (void)setState:(struct { unsigned char x0; })a0 forEntity:(struct { unsigned int x0; })a1;
- (id)errorForEntity:(struct { unsigned int x0; })a0;
- (void).cxx_destruct;
- (void)willDestroyEntities:(const struct { unsigned int x0; } *)a0 count:(long long)a1;
- (void)setState:(struct { unsigned char x0; })a0 forEntities:(const struct { unsigned int x0; } *)a1 count:(unsigned long long)a2;

@end
