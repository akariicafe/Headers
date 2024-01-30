@class UIImage, NCBadgedIconView, NSString;

@interface NCImageBrandingBadge : UIImageView <NCImageBrandingBadging>

@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long badgeType;
@property (nonatomic) unsigned long long badgeLocation;
@property (weak, nonatomic) NCBadgedIconView *badgedIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
