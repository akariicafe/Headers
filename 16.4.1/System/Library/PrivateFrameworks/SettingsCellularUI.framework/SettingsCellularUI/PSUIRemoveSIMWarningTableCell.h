@class UIImageView, UILabel;

@interface PSUIRemoveSIMWarningTableCell : PSTableCell

@property (retain) UIImageView *icon;
@property (retain) UILabel *title;
@property (retain) UILabel *label;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (void)_setupView:(id)a0;

@end
