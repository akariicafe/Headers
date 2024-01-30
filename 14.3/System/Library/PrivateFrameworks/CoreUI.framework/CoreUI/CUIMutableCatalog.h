@interface CUIMutableCatalog : CUICatalog {
    unsigned char _checkRespondsTo : 1;
    unsigned char _respondsToCheck : 1;
}

- (id)init;
- (unsigned long long)_storageRefForRendition:(id)a0 representsODRContent:(BOOL *)a1;
- (void)dealloc;
- (id)_baseKeyForName:(id)a0;
- (id)initWithName:(id)a0 fromBundle:(id)a1 error:(id *)a2;
- (void)insertCGImage:(struct CGImage { } *)a0 name:(id)a1 scale:(double)a2 idiom:(long long)a3 subtype:(long long)a4;
- (void)insertCGImage:(struct CGImage { } *)a0 withName:(id)a1 andDescription:(id)a2;
- (id)_baseImageKeyForName:(id)a0;
- (void)removeImageNamed:(id)a0 withDescription:(id)a1;
- (void)removeImageNamed:(id)a0 scale:(double)a1 idiom:(long long)a2 subtype:(long long)a3;
- (id)initWithName:(id)a0;

@end
