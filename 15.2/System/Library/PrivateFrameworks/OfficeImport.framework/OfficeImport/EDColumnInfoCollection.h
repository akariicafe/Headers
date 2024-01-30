@class EDResources, EDWorksheet;

@interface EDColumnInfoCollection : EDSortedCollection {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}

- (void).cxx_destruct;
- (id)initWithResources:(id)a0 worksheet:(id)a1;
- (id)columnInfoForColumnNumber:(int)a0;
- (id)columnInfoCreateIfNilForColumnNumber:(int)a0;

@end
