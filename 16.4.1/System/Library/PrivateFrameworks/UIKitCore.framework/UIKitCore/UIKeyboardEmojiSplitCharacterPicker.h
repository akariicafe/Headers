@class UIKeyboardEmojiCategory;

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView {
    UIKeyboardEmojiCategory *_category;
}

+ (BOOL)wantsScreenTraits;

- (void)setCategory:(id)a0;
- (void)didMoveToWindow;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)category;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (double)snappedYOffsetForOffset:(double)a0;
- (void)updateToCategory:(long long)a0;

@end
