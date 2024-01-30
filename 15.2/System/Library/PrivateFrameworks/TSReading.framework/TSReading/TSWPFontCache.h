@class NSArray, TSULRUCache, NSMutableDictionary, NSString, NSMutableArray;

@interface TSWPFontCache : NSObject {
    TSULRUCache *_fontCache;
    NSArray *_familyNames;
    NSMutableDictionary *_familyDisplayNames;
    NSArray *_familyFonts;
    NSMutableArray *_cachedAvailableMembers;
    NSString *_cachedMembersFamilyName;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedCache;
+ (id)_singletonAlloc;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;
- (void)p_FontWasDownloaded:(id)a0;
- (struct __CTFont { } *)_createFontWithName:(id)a0 size:(double)a1 weight:(double)a2;
- (id)p_excludedFamilyNames;
- (id)sortedFontFamilies;
- (struct __CTFont { } *)createFontWithName:(id)a0 size:(double)a1 weight:(double)a2 attributes:(id)a3;
- (id)sortedFontFamilyEntriesForStylesheet:(id)a0;
- (id)displayNameForFontFamily:(id)a0;
- (id)availableMembersOfFontFamily:(id)a0;

@end
