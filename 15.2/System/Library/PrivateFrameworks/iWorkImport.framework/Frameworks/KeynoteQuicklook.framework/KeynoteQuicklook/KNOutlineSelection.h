@class NSDictionary;

@interface KNOutlineSelection : KNSlideCollectionSelection

@property (readonly, nonatomic) NSDictionary *selectedParagraphIndexesForSlideNodes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInSelectedParagraph;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1;
- (id)contiguousIndexesForSelectedParagraphIndexesForSlideNodes:(id)a0;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1 selectedParagraphIndexesForSlideNodes:(id)a2 rangeInSelectedParagraph:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })absoluteRangeInStorage:(id)a0;
- (id)estimatedTextSelection;

@end
