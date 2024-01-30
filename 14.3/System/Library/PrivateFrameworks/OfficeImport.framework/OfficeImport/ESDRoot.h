@class NSMutableArray;

@interface ESDRoot : ESDObject {
    NSMutableArray *mChildren;
}

- (id)init;
- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)childCount;
- (struct EshRoot { void /* function */ **x0; unsigned short x1; struct ChVector<EshHeader *> { struct EshHeader **x0; struct EshHeader **x1; struct __compressed_pair<EshHeader **, ChAllocator<EshHeader *> > { struct EshHeader **x0; } x2; } x2; } *)eshRoot;
- (id)childAt:(unsigned long long)a0;
- (id)initWithEshObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (void)writeToWriter:(struct OcWriter { } *)a0;
- (id)initFromReader:(struct OcReader { void /* function */ **x0; struct EshObjectFactory *x1; } *)a0;
- (id)pbReferenceWithID:(unsigned int)a0;
- (id)initWithPbState:(id)a0;

@end
