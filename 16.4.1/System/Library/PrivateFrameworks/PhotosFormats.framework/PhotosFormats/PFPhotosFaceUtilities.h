@interface PFPhotosFaceUtilities : NSObject

+ (id)sortedViableMergeCandidateFacesFor:(id)a0 from:(id)a1 ignoreSourceAssetDimensions:(BOOL)a2 matchScores:(id *)a3;
+ (id)bestMergeCandidateFaceFor:(id)a0 from:(id)a1 ignoreSourceAssetDimensions:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })faceTileSizeAdjustingForImageAspectRatio:(struct CGSize { double x0; double x1; })a0 imgWidth:(double)a1 imgHeight:(double)a2;
+ (BOOL)getCropRectForPortraitImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 size:(double)a1 imgWidth:(double)a2 imgHeight:(double)a3 centerX:(double)a4 centerY:(double)a5;
+ (long long)qualityMeasureForFace:(id)a0 countOfFacesOnAsset:(unsigned long long)a1;
+ (id)selectRepresentativeFromFaces:(id)a0 qualityMeasureByLocalIdentifier:(id)a1 representativenessByCSN:(id)a2;
+ (id)selectRepresentativeFromFaces:(id)a0 qualityMeasureByLocalIdentifier:(id)a1 representativenessByCSN:(id)a2 candidateFaces:(id)a3;

@end
