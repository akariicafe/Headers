@interface VUILibraryMenuDataSourceFactory : NSObject

+ (id)_validCategoriesForPlatform;
+ (id)_validCategoriesForHomeSharing;
+ (id)libraryMenuDataSourceForMediaLibrary:(id)a0;
+ (id)libraryMenuDataSourceForFamilyMember:(id)a0;

@end
