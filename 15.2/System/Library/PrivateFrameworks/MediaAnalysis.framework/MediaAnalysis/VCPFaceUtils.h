@interface VCPFaceUtils : NSObject

+ (int)configureVNRequest:(id *)a0 withClass:(Class)a1 andProcessingVersion:(int)a2;
+ (unsigned short)mad_PHValueFromVNAgeCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNSexCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNEyesCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNSmilingCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNHairColorCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNGlassesCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNExpressionCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNHeadgearCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryV2Label:(id)a0;
+ (unsigned short)mad_PHValueFromVNPoseCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNSkintoneCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNEthnicityCategoryLabel:(id)a0;
+ (unsigned short)mad_PHValueFromVNFaceGazeDirection:(long long)a0;
+ (id)mad_VNFaceGazeDirectionDescription:(long long)a0;
+ (id)mad_PHFaceGazeTypeDescription:(unsigned short)a0;
+ (id)vcpPhotosFaceFromPHFace:(id)a0 copyPropertiesOption:(long long)a1;
+ (id)resourceForFaceProcessingWithAsset:(id)a0 allowStreaming:(BOOL)a1;
+ (id)imageCreationOptions;
+ (id)phFacesFromVCPPhotosFaces:(id)a0 withFetchOptions:(id)a1;
+ (id)phFaceFromVCPPhotosFace:(id)a0 withFetchOptions:(id)a1;
+ (void)assignPropertiesOfVCPPhotosFace:(id)a0 toPHFaceChangeRequest:(id)a1;
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (id)_vnFaceAttributeFacialHairToPHFaceExpressionType;
+ (id)_vnFaceAttributeHeadGearToPHFaceHeadGearType;
+ (id)_vnFaceAttributeHairTypeToPHFaceHairType;
+ (id)_vnFaceAttributePoseToPHFacePoseType;
+ (id)_vnFaceAttributeSkintoneToPHFaceSkintoneType;
+ (id)_vnFaceAttributeEthnicityToPHFaceEthnicityType;
+ (id)_vnFaceGazeDirectionToPHFaceGazeType;
+ (id)_firstLocallyAvailableResourceFromResources:(id)a0;
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)a0;
+ (id)resourceForFaceProcessing:(id)a0 allowStreaming:(BOOL)a1;

- (id)_vcpFacesArrayFromPHFetchResult:(id)a0 copyPropertiesOption:(long long)a1;

@end
