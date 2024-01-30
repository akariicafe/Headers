@class NSMutableArray;

@interface ESDRoot : ESDObject {
    NSMutableArray *mChildren;
}

- (void)addChild:(id)a0;
- (id)init;
- (unsigned long long)childCount;
- (void).cxx_destruct;
- (void *)eshRoot;
- (id)initFromReader:(struct OcReader { void /* function */ **x0; struct EshObjectFactory *x1; } *)a0;
- (id)childAt:(unsigned long long)a0;
- (id)initWithEshObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (id)initWithPbState:(id)a0;
- (id)pbReferenceWithID:(unsigned int)a0;
- (void)writeToWriter:(struct OcWriter { } *)a0;

@end
