@interface TPAllFootnoteSelection : TSKSelection

+ (Class)archivedSelectionClass;

- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
