@class NSOperationQueue, NSMutableDictionary;

@interface TSWPLoadableFonts : NSObject {
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)loadAll;
- (void)backgroundLoadAll;
- (void)loadFontWithName:(id)a0;
- (void)loadFontsForGroup:(id)a0;
- (void)p_loadFontWithInfo:(id)a0;
- (void)pauseBackgroundLoading;
- (void)registerFontName:(id)a0 forPath:(id)a1 forGroup:(id)a2 isObfuscated:(BOOL)a3 backgroundLoad:(BOOL)a4;
- (void)resumeBackgroundLoading;
- (void)unregisterFontsForGroup:(id)a0;

@end
