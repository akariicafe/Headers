@interface CMGlobalCache : NSObject

+ (void)initGlobalCache;
+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)colorPropertyCache;
+ (id)cssStylesheetCache;
+ (id)drawableElementCache;
+ (id)lengthPropertyCache;
+ (void)releaseGlobalCache;

@end
