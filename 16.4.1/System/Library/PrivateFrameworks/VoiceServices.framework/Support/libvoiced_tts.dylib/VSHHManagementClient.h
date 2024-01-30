@interface VSHHManagementClient : NSObject

+ (id)sharedInstance;

- (void)cleanUnknownAccessoriesPreferences;
- (BOOL)isExistingAccessoryId:(id)a0;

@end
