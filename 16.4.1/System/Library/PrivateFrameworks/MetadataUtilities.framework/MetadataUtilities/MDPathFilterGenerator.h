@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface MDPathFilterGenerator : NSObject {
    NSMutableDictionary *_namedRoots;
    NSMutableArray *_namedRootArray;
    NSMutableDictionary *_namedRootIndexes;
    NSMutableArray *_auxValueArray;
    int _nextAuxValueIndex;
    BOOL _processExtensions;
    int _auxValueCount;
    NSMutableDictionary *_namedLinkExtensionsDictionary;
    NSDictionary *_namedLinkPrefixesDictionary;
    unsigned long long _atBundleMask;
    unsigned long long _inBundleMask;
    unsigned long long _inheritMask;
    unsigned long long _defaultRule;
    unsigned long long _defaultMask;
    unsigned long long _ignoreMask;
}

- (void)dump;
- (void)dealloc;
- (void)addNamed:(id)a0 auxValue:(unsigned long long)a1 forPath:(id)a2;
- (id)filterDataForMountDepth:(int)a0;
- (struct _MDPlistContainer { } *)copyFilterMDPlistForMountDepth:(int)a0;
- (void)setAtBundleField:(unsigned int)a0 inBundleField:(unsigned int)a1;
- (void)addMappedExtensions:(id)a0;
- (void)addNamed:(id)a0 field:(int)a1 value:(int)a2 forPath:(id)a3 permitLink:(BOOL)a4;
- (void)addNamed:(id)a0 field:(int)a1 value:(int)a2 hasAuxValue:(BOOL)a3 auxValue:(unsigned long long)a4 forPath:(id)a5 permitLink:(BOOL)a6 copyParentWildcardLink:(BOOL)a7;
- (void)addRules:(struct { unsigned long long x0[32]; id x1; } *)a0 withPrefix:(id)a1;
- (void)addRules:(struct { unsigned long long x0[32]; id x1; } *)a0 withPrefix:(id)a1 tableMapping:(id)a2;
- (id)initWithDefaultFieldsAndValues:(int *)a0 ignoreFields:(int *)a1 mappedPrefixes:(id)a2 hiddenExtensions:(id)a3 mappedExtensions:(id)a4;

@end
