@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell

@property (retain, nonatomic) UIColor *textLabelColor;
@property (nonatomic) BOOL shouldTintTextLabel;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setSectionLocation:(int)a0 animated:(BOOL)a1;
- (void)_updateTextLabelColor;

@end
