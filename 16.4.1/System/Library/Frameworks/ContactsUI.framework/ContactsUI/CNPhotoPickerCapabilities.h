@interface CNPhotoPickerCapabilities : NSObject

+ (BOOL)allowsAvatarFaceTracking;
+ (BOOL)allowsAvatarStoreAccess;
+ (BOOL)allowsAvatarUI;
+ (BOOL)allowsCameraAccess;
+ (BOOL)allowsPhotoLibraryAccess;
+ (BOOL)isCameraTCCEnabled;

@end
