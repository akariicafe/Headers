@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider>

@property (readonly, nonatomic) CNCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageNameForDiameter:(double)a0;
+ (id)companyImageNameForDiameter:(double)a0;

- (struct CGImage { } *)_cnui_roundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)_cnui_circularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)_cnui_likenessType;
- (void).cxx_destruct;
- (id)init;
- (id)_cnui_likenessForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderCircularImageForSilhouetteImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (struct CGImage { } *)renderRoundedRectImageForSilhouetteImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
