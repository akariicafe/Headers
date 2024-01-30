@class NSString;

@interface TSWPTOCPageNumberAttachment : TSWPPageNumberAttachment {
    NSString *_pageNumber;
    NSString *_bookmarkName;
}

@property (copy, nonatomic) NSString *pageNumber;
@property (copy, nonatomic) NSString *bookmarkName;

- (unsigned int)elementKind;
- (void).cxx_destruct;
- (id)stringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
