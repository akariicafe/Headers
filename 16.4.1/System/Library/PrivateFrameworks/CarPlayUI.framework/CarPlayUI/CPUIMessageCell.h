@class NSArray, UIImageView, UIImage, UILabel;

@interface CPUIMessageCell : _CPUIBaseTableCell

@property (retain, nonatomic) UIImageView *unreadImageView;
@property (retain, nonatomic) UIImageView *leadingGlyphView;
@property (retain, nonatomic) UIImageView *primaryImageView;
@property (retain, nonatomic) UIImage *leadingGlyph;
@property (retain, nonatomic) UIImage *unreadIndicatorImage;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UILabel *trailingLabel;
@property (retain, nonatomic) UIImageView *trailingImageView;
@property (retain, nonatomic) UIImageView *trailingGlyphView;
@property (retain, nonatomic) UIImage *trailingGlyph;
@property (retain, nonatomic) NSArray *constraints;

+ (double)rowHeight;
+ (double)minimumHeight;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setUnread:(BOOL)a0;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)a0;
- (void)_updateTintColors;
- (void)configureCell;

@end
