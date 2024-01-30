@interface WLKUpNextWidgetCacheManager : NSObject

+ (BOOL)consumePendingInvalidation;
+ (void)requestInvalidation;
+ (void)requestReload;

@end
