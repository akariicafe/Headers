@interface PLAssetFormatsCore : NSObject

+ (long long)masterThumbnailFormat;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centeredRectForSourceSize:(struct CGSize { double x0; double x1; })a0 destinationSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })sizeForFormat:(long long)a0;
+ (BOOL)formatSizeIsShortSide:(long long)a0;
+ (struct CGSize { double x0; double x1; })scaledSizeForSize:(struct CGSize { double x0; double x1; })a0 format:(long long)a1 capLength:(BOOL)a2;
+ (long long)wildcatStackFormat;

@end
