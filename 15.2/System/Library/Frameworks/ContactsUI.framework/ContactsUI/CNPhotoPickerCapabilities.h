@interface CNPhotoPickerCapabilities : NSObject

+ (BOOL)allowsAvatarUI;
+ (BOOL)allowsAvatarStoreAccess;
+ (BOOL)isCameraTCCEnabled;
+ (BOOL)allowsAvatarFaceTracking;
+ (BOOL)allowsCameraAccess;
+ (BOOL)allowsPhotoLibraryAccess;

@end
