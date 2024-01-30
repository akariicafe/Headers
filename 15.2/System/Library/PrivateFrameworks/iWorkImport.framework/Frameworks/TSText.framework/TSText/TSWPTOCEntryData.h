@class NSString, TSWPStorage, TSWPParagraphStyle, NSSet, TSWPListStyle;

@interface TSWPTOCEntryData : TSPObject <TSPCopying, TSSStyleClient>

@property (readonly, weak, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) unsigned long long paragraphIndex;
@property (readonly, nonatomic) unsigned long long pageNumber;
@property (readonly, copy, nonatomic) NSString *numberFormat;
@property (readonly, nonatomic) NSString *heading;
@property (readonly, nonatomic) TSWPParagraphStyle *indexedStyle;
@property (readonly, nonatomic) TSWPListStyle *indexedListStyle;
@property (readonly, nonatomic) unsigned long long indexedListStart;
@property (readonly, nonatomic) unsigned long long indexedParagraphLevel;
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tocEntryDataWithStorage:(id)a0 paragraphIndex:(unsigned long long)a1 pageNumber:(unsigned long long)a2 numberFormat:(id)a3 heading:(id)a4 indexedStyle:(id)a5 indexedListStyle:(id)a6 indexedListStart:(unsigned long long)a7 indexedParagraphLevel:(unsigned long long)a8;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithContext:(id)a0;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithStorage:(id)a0 paragraphIndex:(unsigned long long)a1 pageNumber:(unsigned long long)a2 numberFormat:(id)a3 heading:(id)a4 indexedStyle:(id)a5 indexedListStyle:(id)a6 indexedListStart:(unsigned long long)a7 indexedParagraphLevel:(unsigned long long)a8;

@end
