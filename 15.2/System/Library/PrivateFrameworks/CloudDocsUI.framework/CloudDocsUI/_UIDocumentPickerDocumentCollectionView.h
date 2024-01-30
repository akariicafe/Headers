@interface _UIDocumentPickerDocumentCollectionView : UICollectionView {
    BOOL _avoidNegativeContentOffset;
}

@property (nonatomic) double contentSizeAdjustment;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAdjustedContentSize:(struct CGSize { double x0; double x1; })a0 withFrameSize:(struct CGSize { double x0; double x1; })a1;
- (void)_performWhileAvoidingNegativeContentOffset:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })_updatedContentOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 avoidNegativeContentOffset:(BOOL)a1;

@end
