@interface GKHairlineView : UIView

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)sizeToFit;

@end
