@class UIView;
@protocol CKAssociatedMessageTranscriptCellDelegate;

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell

@property (weak, nonatomic) id<CKAssociatedMessageTranscriptCellDelegate> delegate;
@property (retain, nonatomic) UIView *associatedItemView;
@property (nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long layoutIntent; unsigned long long associatedLayoutIntent; float parentPreviewWidth; float xScalar; float yScalar; float scale; float rotation; } geometryDescriptor;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } parentSize;
@property (nonatomic) double parentRotationOffset;
@property (nonatomic) double cumulativeAssociatedOffset;

- (void)applyLayoutAttributes:(id)a0;
- (void)addFilter:(id)a0;
- (void)clearFilters;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })associatedViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (BOOL)failureButtonAdjustsContentAlignmentRect;
- (BOOL)hidesCheckmark;
- (void)layoutSubviewsForAlignmentContents;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;

@end
