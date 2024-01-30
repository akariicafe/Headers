@class NSOperationQueue, NSMutableDictionary;

@interface TSWPLoadableFonts : NSObject {
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;
- (void)backgroundLoadAll;
- (void)loadFontWithName:(id)a0;
- (void)loadAll;
- (void)p_loadFontWithInfo:(id)a0;
- (void)pauseBackgroundLoading;
- (void)resumeBackgroundLoading;
- (void)loadFontsForGroup:(id)a0;
- (void)registerFontName:(id)a0 forPath:(id)a1 forGroup:(id)a2 isObfuscated:(BOOL)a3 backgroundLoad:(BOOL)a4;
- (void)unregisterFontsForGroup:(id)a0;

@end
