@interface PGPeopleUtilities : NSObject

+ (BOOL)_hasMomentsForPersonLocalIdentifiers:(id)a0 inGraph:(id)a1 photoLibrary:(id)a2;
+ (id)_validPersonLocalIdentifiersFromSocialGroups:(id)a0 withPhotoLibrary:(id)a1;
+ (id)validateKeyedSocialGroups:(id)a0 withPhotoLibrary:(id)a1 graph:(id)a2;
+ (id)validateSocialGroups:(id)a0 withPhotoLibrary:(id)a1 graph:(id)a2;

@end
