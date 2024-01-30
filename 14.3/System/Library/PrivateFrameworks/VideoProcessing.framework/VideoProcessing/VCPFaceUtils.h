@interface VCPFaceUtils : NSObject

+ (id)resourceForFaceProcessing:(id)a0 allowStreaming:(BOOL)a1;
+ (id)resourceForFaceProcessingWithAsset:(id)a0 allowStreaming:(BOOL)a1;
+ (id)phFaceFromPVFace:(id)a0 withFetchOptions:(id)a1;
+ (id)phFacesFromPVFaces:(id)a0 withFetchOptions:(id)a1;
+ (void)assignPropertiesOfPVFace:(id)a0 toPHFaceChangeRequest:(id)a1;
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (id)_vnFaceAttributeBaldToPHFaceBaldTypeMap;
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (unsigned short)_phFaceAgeTypeFromPVFace:(id)a0;
+ (unsigned short)_phFaceSexFromPVFace:(id)a0;
+ (unsigned short)_phFaceEyesStateFromPVFace:(id)a0;
+ (unsigned short)_phFaceSmileTypeFromPVFace:(id)a0;
+ (id)pvImageCreationOptions;
+ (unsigned short)_phFaceFacialHairTypeFromPVFace:(id)a0;
+ (unsigned short)_phFaceHairColorTypeFromPVFace:(id)a0;
+ (unsigned short)_phFaceBaldTypeFromPVFace:(id)a0;
+ (unsigned short)_phFaceGlassesTypeFromPVFace:(id)a0;
+ (id)_firstLocallyAvailableResourceFromResources:(id)a0;
+ (id /* block */)_assetResourceLargestToSmallestComparator;
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)a0;
+ (id)pvFaceFromPHFace:(id)a0 copyPropertiesOption:(long long)a1;

- (id)_pvFacesArrayFromPHFetchResult:(id)a0 copyPropertiesOption:(long long)a1;

@end
