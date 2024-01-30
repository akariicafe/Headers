@interface CardDAVPropertiesHelper : NSObject

+ (BOOL)updateSyncDict:(id)a0 withDAVContainer:(id)a1;
+ (long long)maxImageSizeFromSyncDict:(id)a0;
+ (long long)maxResourceSizeFromSyncDict:(id)a0;

@end
