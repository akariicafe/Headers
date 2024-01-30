@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell

@property (copy, nonatomic) UIKeyboardInputMode *inputMode;

+ (long long)cellStyle;

- (id)title;
- (id)subtitle;
- (void)updateLabels;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)dealloc;

@end
