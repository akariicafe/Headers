@interface RUIVariableHeightCell : RemoteUITableViewCell

@property (nonatomic) BOOL supportsAccessory;
@property (nonatomic) long long detailTextAlignment;

- (void)layoutSubviews;
- (double)height;
- (struct CGSize { double x0; double x1; })sizeForTextLabel:(id)a0 width:(double)a1;

@end
