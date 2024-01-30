@interface RUIVariableHeightCell : RemoteUITableViewCell

@property (nonatomic) BOOL supportsAccessory;
@property (nonatomic) long long detailTextAlignment;

- (double)height;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForTextLabel:(id)a0 width:(double)a1;

@end
