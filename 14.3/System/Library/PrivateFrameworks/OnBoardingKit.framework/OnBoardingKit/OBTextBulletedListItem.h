@interface OBTextBulletedListItem : OBBulletedListItem

- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 accessoryButton:(id)a3;
- (BOOL)shouldLayoutVertically;
- (double)leadingMargins;
- (double)trailingMargins;
- (double)imageSizeForImage:(id)a0;

@end
