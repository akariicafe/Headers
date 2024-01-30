@interface HUCenteredCellUITableView : UITableView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;

- (void)layoutSubviews;

@end
