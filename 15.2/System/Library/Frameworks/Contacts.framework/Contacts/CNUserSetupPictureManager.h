@interface CNUserSetupPictureManager : NSObject

+ (id)log;
+ (BOOL)hasUserSetupPictureData;
+ (BOOL)userSetupPictureDataIsFresh;
+ (BOOL)clearUserSetupPictureData;
+ (id)userSetupPictureFilePath;
+ (id)userSetupPicturePath;
+ (id)userSetupPictureData;

@end
