@interface _TVMonogramInitialsSilhouetteImageGenerator : _TVMonogramImageGenerator

+ (id)_initialsForFirstName:(id)a0 lastName:(id)a1;
+ (id)monogramImageWithDescription:(id)a0;
+ (BOOL)_isRomanName:(id)a0;

- (void)cancelLoad:(id)a0;
- (id)imageKeyForObject:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
