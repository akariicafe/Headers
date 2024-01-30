@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject {
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    struct { BOOL areEntriesDirty; } _flags;
}

- (void).cxx_destruct;
- (id)init;
- (id)prototypeForItemAtIndex:(unsigned long long)a0;
- (id)allPrototypes;
- (void)addPrototype:(id)a0 forIndexes:(id)a1;

@end
