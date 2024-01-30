@class UIResponder, UIKeyboardEmojiGraphicsTraits;

@interface UIKeyboardEmojiCollectionView : UICollectionView

@property (nonatomic) BOOL isInSearchPopover;
@property (nonatomic) UIResponder *hitTestResponder;
@property (readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;

- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)backgroundColor;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (double)_currentScreenScale;
- (id)closestCellForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1 emojiGraphicsTraits:(id)a2;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
