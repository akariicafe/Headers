@class ICTableSelectionKnob, ICTableAccessibilityElementProvider, ICiOSTableAccessibilityElement, UIView, UIScrollView, ICTableAttachmentView, ICTableAttachmentViewController;

@interface ICTableAccessibilityController : NSObject

@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (readonly, nonatomic) ICTableAccessibilityElementProvider *elementProvider;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) ICTableAttachmentView *hostingTableAttachmentView;
@property (readonly, nonatomic) UIScrollView *tableScrollView;
@property (readonly, nonatomic) UIScrollView *noteScrollView;
@property (readonly, nonatomic) BOOL isTableRightToLeft;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } attachmentRangeInNote;
@property (readonly, nonatomic) ICTableSelectionKnob *startSelectionKnob;
@property (readonly, nonatomic) ICTableSelectionKnob *endSelectionKnob;
@property (retain, nonatomic) ICiOSTableAccessibilityElement *tableElement;
@property (readonly, nonatomic) UIView *dragProviderView;

- (BOOL)isEditable;
- (id)table;
- (void).cxx_destruct;
- (void)addColumnBefore;
- (void)moveCurrentColumnOrRow:(BOOL)a0 toIndex:(unsigned long long)a1;
- (void)addColumnAfter;
- (void)addRowAbove;
- (void)addRowBelow;
- (id)attributedContentStringForColumnID:(id)a0 rowID:(id)a1;
- (void)beginEditingCellWithColumnID:(id)a0 rowID:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCellWithColumnID:(id)a0 rowID:(id)a1;
- (id)cellElementForColumnIndex:(unsigned long long)a0 rowIndex:(unsigned long long)a1;
- (id)cellElementsForColumnID:(id)a0;
- (id)cellElementsForRowID:(id)a0;
- (BOOL)cellIsEditingAtColumnID:(id)a0 rowID:(id)a1;
- (id)columnIDForColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnIndexForColumnID:(id)a0;
- (void)convertTableToText;
- (void)deleteSelectedColumns;
- (void)deleteSelectedRows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInScreenSpaceForCellWithColumnID:(id)a0 rowID:(id)a1;
- (id)initWithTableAttachmentViewController:(id)a0;
- (void)invalidateAXElementsForColumnID:(id)a0;
- (void)invalidateAXElementsForRowID:(id)a0;
- (BOOL)isHeaderCellAtColumnID:(id)a0 rowID:(id)a1;
- (BOOL)isTableTextRangeSelected;
- (void)reverseTableDirection;
- (id)rowIDForRowIndex:(unsigned long long)a0;
- (unsigned long long)rowIndexForRowID:(id)a0;
- (void)scrollColumnIDToVisible:(id)a0 rowID:(id)a1;
- (void)selectCellForColumnID:(id)a0 rowID:(id)a1;
- (void)selectCellRangeForCurrentCell;
- (void)selectColumnWithID:(id)a0;
- (void)selectCurrentColumn;
- (void)selectCurrentRow;
- (void)selectRowWithID:(id)a0;
- (void)selectTableTextRange:(BOOL)a0;
- (id)selectedCells;
- (id)selectedColumnIDs;
- (id)selectedRowIDs;
- (void)speakCellRangeSelection:(id)a0;
- (void)tableRowOrColumnSelectionDidChange;
- (id)textViewForColumnID:(id)a0;
- (id)titleForColumnID:(id)a0;
- (id)titleForRowID:(id)a0;

@end
