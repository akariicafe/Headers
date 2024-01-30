@interface EDStylesCollection : EDCollection {
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)init;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)defaultWorkbookStyle;
- (void)setDefaultWorkbookStyleIndex:(unsigned long long)a0;
- (unsigned long long)defaultWorkbookStyleIndex;

@end
