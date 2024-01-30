@interface WLKUpNextWidgetCacheManager : NSObject

+ (void)requestReload;
+ (void)requestInvalidation;
+ (BOOL)consumePendingInvalidation;

@end
