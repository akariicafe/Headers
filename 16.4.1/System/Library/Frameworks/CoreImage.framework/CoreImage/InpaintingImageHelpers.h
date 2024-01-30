@interface InpaintingImageHelpers : NSObject

+ (id)scaleImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
+ (id)absoluteDiffBetweenImage:(id)a0 andImage:(id)a1;
+ (id)blendImage:(id)a0 withBackgroundImage:(id)a1 usingMask:(id)a2;
+ (id)blendImage:(id)a0 withBackgroundImage:(id)a1 usingMask:(id)a2 andGaussianBlendRadius:(int)a3;
+ (id)blurImage:(id)a0 withSigma:(double)a1;
+ (id)compositeImage:(id)a0 overImage:(id)a1;
+ (id)compositeImageNoReclamping:(id)a0 overImage:(id)a1;
+ (id)compositeImageWithReclamping:(id)a0 overImage:(id)a1;
+ (id)computePerChannelAvgPixelValueInImage:(id)a0 onArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)computePerChannelSumsOfPixelsInImage:(id)a0 onArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeTileRectForImage:(id)a0 aroundCenterPoint:(struct CGPoint { double x0; double x1; })a1 tileSize:(int)a2;
+ (id)createBGRAVImageWrapperFromCIImage:(id)a0;
+ (id)dilateMask:(id)a0 usingRadius:(int)a1;
+ (id)dilateMaskUsingClampingAndCropping:(id)a0 usingRadius:(int)a1;
+ (id)erodeMask:(id)a0 usingRadius:(int)a1;
+ (id)erodeMaskUsingClampingAndCropping:(id)a0 usingRadius:(int)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toWidth:(int)a1 andHeight:(int)a2 withinArea:(struct CGSize { double x0; double x1; })a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSideExtraPercentage:(float)a1 maxExtraSidePixels:(int)a2 withinArea:(struct CGSize { double x0; double x1; })a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandBoundingBoxToRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSideExtraPercentage:(float)a1 maxExtraSidePixels:(int)a2 withinArea:(struct CGSize { double x0; double x1; })a3 roundUpSidesToClosestResolution:(id)a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandBoundingBoxToSquare:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSideExtraPercentage:(float)a1 maxExtraSidePixels:(int)a2 withinArea:(struct CGSize { double x0; double x1; })a3 roundUpSidesToClosestResolution:(id)a4;
+ (double)expandDimension:(double)a0 toOneOfTheResolutions:(id)a1;
+ (id)extractTileFromImage:(id)a0 aroundCenterPoint:(struct CGPoint { double x0; double x1; })a1 tileSize:(int)a2;
+ (id)findEquidistantPointsOnMaskDiagonal:(id)a0 tileSize:(int)a1 maxDistanceBetweenPoints:(int)a2 diagonalityDirection:(int)a3;
+ (int)findTile1DOffsetForCenter:(int)a0 maxBound:(int)a1 tileSize:(int)a2;
+ (id)invertMask:(id)a0;
+ (id)moveOriginForImage:(id)a0 to:(struct CGPoint { double x0; double x1; })a1;
+ (id)multiplyImage:(id)a0 withMask:(id)a1;
+ (id)padImage:(id)a0 toExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingColor:(id)a2;
+ (id)padMask:(id)a0 toImageSize:(id)a1;
+ (id)reclampImageWith1PixBoundary:(id)a0;
+ (void)saveCIImage:(id)a0 asPNGAt:(id)a1;
+ (void)saveCIImage:(id)a0 asTIFFAt:(id)a1;
+ (void)saveVImageWrapper:(id)a0 asPNGAt:(id)a1;
+ (id)scaleImage:(id)a0 toShorterEdgeSize:(double)a1;
+ (id)scaleImage:(id)a0 toWidth:(double)a1 andHeight:(double)a2;
+ (id)thresholdMask:(id)a0;

@end
