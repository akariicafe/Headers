@interface PXPeopleSocialGroupViewGenerator : NSObject

+ (id)generateViewForSocialGroup:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (void)_layoutAvatarViews:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)resizeThumbnailSizeForSocialGroupView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
