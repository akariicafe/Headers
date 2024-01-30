@interface PLCloudPhotoLibraryError : NSObject

+ (id)userMessageForErrorType:(long long)a0;
+ (id)createErrorWithType:(long long)a0;
+ (id)createErrorWithType:(long long)a0 withDebugMessage:(id)a1;

@end
