@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *symbol;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *selectedCircle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)symbolFont;
- (id)titleFont;
- (void)setPressIndicatorHidden:(BOOL)a0;
- (void)setSelectedCircleBlendMode:(BOOL)a0;
- (void)setTitleText:(id)a0;
- (void)dealloc;

@end
