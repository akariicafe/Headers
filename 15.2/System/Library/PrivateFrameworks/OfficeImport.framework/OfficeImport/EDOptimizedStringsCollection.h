@class NSMutableDictionary;

@interface EDOptimizedStringsCollection : EDCollection {
    NSMutableDictionary *mStringDictionary;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;

@end
