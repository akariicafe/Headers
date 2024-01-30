@interface OBTextBulletedListItem : OBBulletedListItem

- (double)imageSizeForImage:(id)a0;
- (double)trailingMargins;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 accessoryButton:(id)a3;
- (double)leadingMargins;
- (BOOL)shouldLayoutVertically;

@end
