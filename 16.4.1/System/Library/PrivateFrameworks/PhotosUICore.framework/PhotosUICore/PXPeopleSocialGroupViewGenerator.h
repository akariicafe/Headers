@interface PXPeopleSocialGroupViewGenerator : NSObject

+ (id)_faceCropFetchOptionsForSocialGroup:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
+ (void)_layoutAvatarViews:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (unsigned long long)_numberOfFacesToShowForSocialGroup:(id)a0;
+ (id)generateViewForSocialGroup:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
+ (void)prefetchForSocialGroup:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
+ (void)resizeThumbnailSizeForSocialGroupView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
