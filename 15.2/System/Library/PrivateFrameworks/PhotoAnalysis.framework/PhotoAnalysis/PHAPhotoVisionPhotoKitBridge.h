@interface PHAPhotoVisionPhotoKitBridge : NSObject

+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)phFaceFromPVFace:(id)a0 withFetchOptions:(id)a1;
+ (id)phFacesFromPVFaces:(id)a0 withFetchOptions:(id)a1;
+ (id)pvFaceFromPHFace:(id)a0 copyPropertiesOption:(long long)a1;
+ (id)pvFacesArrayFromPHFetchResult:(id)a0 copyPropertiesOption:(long long)a1;
+ (id)pvFaceprintFromPHFaceprint:(id)a0;
+ (id)phFaceprintFromPVFaceprint:(id)a0;
+ (id)phFaceCropFromPVFaceCrop:(id)a0 withFetchOptions:(id)a1;
+ (id)phFaceCropsFromPVFaceCrops:(id)a0 withFetchOptions:(id)a1;
+ (id)pvFaceCropFromPHFaceCrop:(id)a0;
+ (id)vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (unsigned short)phFaceAgeTypeFromPVFace:(id)a0;
+ (id)vnFaceAttributeSexToPHFaceSexTypeMap;
+ (unsigned short)phFaceSexFromPVFace:(id)a0;
+ (id)vnFaceAttributeEyesToPHEyesStateMap;
+ (unsigned short)phFaceEyesStateFromPVFace:(id)a0;
+ (id)vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (unsigned short)phFaceSmileTypeFromPVFace:(id)a0;
+ (id)vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (unsigned short)phFaceFacialHairTypeFromPVFace:(id)a0;
+ (id)vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (unsigned short)phFaceHairColorTypeFromPVFace:(id)a0;
+ (id)vnFaceAttributeBaldToPHFaceBaldTypeMap;
+ (unsigned short)phFaceBaldTypeFromPVFace:(id)a0;
+ (id)vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (unsigned short)phFaceGlassesTypeFromPVFace:(id)a0;
+ (void)assignPropertiesOfPVFace:(id)a0 toPHFaceChangeRequest:(id)a1;

@end
