@class ICTableLayoutManager, NSUUID, NSMutableSet, NSTextContainer, ICTableColumnTextStorage, NSArray;

@interface ICTableColumnLayoutManager : ICLayoutManager

@property (readonly) double width;
@property (readonly, nonatomic) NSMutableSet *currentlyHiddenSubviews;
@property (readonly, nonatomic) ICTableColumnTextStorage *columnTextStorage;
@property (readonly, weak, nonatomic) ICTableLayoutManager *tableLayoutManager;
@property (readonly) NSUUID *columnID;
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (retain, nonatomic) NSArray *hiddenRows;

- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })glyphRangeForBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTextContainer:(id)a1;
- (void)removeRow:(id)a0;
- (void)ensureCellExistsAtRowID:(id)a0;
- (void)filterAttachmentsInTextStorage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 targetAttachment:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })glyphRangeForRowID:(id)a0;
- (id)glyphRangesForRows:(id)a0;
- (double)heightOfCellAtRowID:(id)a0;
- (id)initWithTableLayoutManager:(id)a0 columnID:(id)a1;
- (id)rectsForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
