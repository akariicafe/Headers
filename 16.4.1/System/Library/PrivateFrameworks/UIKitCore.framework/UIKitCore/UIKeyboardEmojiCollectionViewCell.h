@class UILabel, UIKeyboardEmoji, UIView;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {
    UILabel *_emojiLabel;
}

@property (retain, nonatomic) UILabel *unreleasedBanner;
@property (retain, nonatomic) UIView *navigationHighlightView;
@property (retain, nonatomic) UILabel *noResultsLabel;
@property (copy, nonatomic) UIKeyboardEmoji *emoji;
@property (nonatomic) long long emojiFontSize;
@property (nonatomic) BOOL unreleasedHighlight;
@property (nonatomic) BOOL noResultsCell;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
