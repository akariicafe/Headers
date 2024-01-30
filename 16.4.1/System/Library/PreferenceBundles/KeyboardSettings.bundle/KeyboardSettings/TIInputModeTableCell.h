@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell

@property (copy, nonatomic) UIKeyboardInputMode *inputMode;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)subtitle;
- (void)dealloc;
- (id)title;
- (void)updateLabels;

@end
