@interface CNPhotoPickerCapabilities : NSObject

+ (BOOL)allowsPhotoLibraryAccess;
+ (BOOL)allowsAvatarUI;
+ (BOOL)isCameraTCCEnabled;
+ (BOOL)allowsAvatarStoreAccess;
+ (BOOL)allowsAvatarFaceTracking;
+ (BOOL)allowsCameraAccess;

@end
