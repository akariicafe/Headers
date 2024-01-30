@interface UITableViewCellContentMirror : UIView {
    unsigned char _selected : 1;
}

@property (nonatomic, getter=isSelected) BOOL selected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)cell;

@end
