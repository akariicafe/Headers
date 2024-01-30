@class NSOperationQueue, NSMutableDictionary;

@interface TSWPLoadableFonts : NSObject {
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;
- (void)loadAll;
- (void)backgroundLoadAll;
- (void)loadFontWithName:(id)a0;
- (void)p_loadFontWithInfo:(id)a0;
- (void)pauseBackgroundLoading;
- (void)resumeBackgroundLoading;
- (void)loadFontsForGroup:(id)a0;
- (void)registerFontName:(id)a0 forPath:(id)a1 forGroup:(id)a2 isObfuscated:(BOOL)a3 backgroundLoad:(BOOL)a4;
- (void)unregisterFontsForGroup:(id)a0;

@end
