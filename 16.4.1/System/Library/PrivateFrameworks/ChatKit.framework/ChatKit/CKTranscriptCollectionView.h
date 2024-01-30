@interface CKTranscriptCollectionView : CKEditableCollectionView

@property (nonatomic) BOOL ignoresContentOffsetChanges;
@property (nonatomic) BOOL ignoresReloadDataRequests;
@property (nonatomic) BOOL dynamicsDisabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)reloadData;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
