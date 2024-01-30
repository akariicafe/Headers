@class NSDictionary;

@interface KNOutlineSelection : KNSlideCollectionSelection

@property (readonly, nonatomic) NSDictionary *selectedParagraphIndexesForSlideNodes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInSelectedParagraph;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })absoluteRangeInStorage:(id)a0;
- (id)contiguousIndexesForSelectedParagraphIndexesForSlideNodes:(id)a0;
- (id)estimatedTextSelection;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1 selectedParagraphIndexesForSlideNodes:(id)a2 rangeInSelectedParagraph:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)updatedOutlineSelectionWithTextSelection:(id)a0;

@end
