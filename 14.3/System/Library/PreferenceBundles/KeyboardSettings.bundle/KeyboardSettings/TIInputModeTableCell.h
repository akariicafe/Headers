@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell

@property (copy, nonatomic) UIKeyboardInputMode *inputMode;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)dealloc;
- (id)subtitle;
- (void)updateLabels;
- (id)title;

@end
