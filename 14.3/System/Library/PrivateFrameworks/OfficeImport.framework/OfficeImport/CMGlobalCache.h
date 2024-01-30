@interface CMGlobalCache : NSObject

+ (id)colorPropertyCache;
+ (id)lengthPropertyCache;
+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStylesheetCache;
+ (id)drawableElementCache;
+ (void)initGlobalCache;
+ (void)releaseGlobalCache;

@end
