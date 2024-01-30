@interface CNUserSetupPictureManager : NSObject

+ (id)log;
+ (BOOL)clearUserSetupPictureData;
+ (BOOL)hasUserSetupPictureData;
+ (id)userSetupPictureData;
+ (BOOL)userSetupPictureDataIsFresh;
+ (id)userSetupPictureFilePath;
+ (id)userSetupPicturePath;

@end
