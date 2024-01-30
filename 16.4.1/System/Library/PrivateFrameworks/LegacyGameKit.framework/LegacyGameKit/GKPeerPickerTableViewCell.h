@interface GKPeerPickerTableViewCell : UITableViewCell

@property (nonatomic) BOOL topSeparator;

+ (void)initialize;
+ (double)separatorHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
