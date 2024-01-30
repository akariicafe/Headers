@class NSString;

@interface TSWPTextualAttachment : TSWPAttachment

@property (readonly, nonatomic) NSString *stringEquivalent;

+ (Class)classForUnarchiver:(id)a0;

- (void)setStringEquivalent:(id)a0;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)a0;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)stringEquivalentWithNumberProvider:(id)a0;

@end
