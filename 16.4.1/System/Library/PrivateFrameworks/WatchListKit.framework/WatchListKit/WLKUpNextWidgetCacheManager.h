@interface WLKUpNextWidgetCacheManager : NSObject

+ (void)requestInvalidation;
+ (BOOL)consumePendingInvalidation;
+ (void)requestReload;

@end
