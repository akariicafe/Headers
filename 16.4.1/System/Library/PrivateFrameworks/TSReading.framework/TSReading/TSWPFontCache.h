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

- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;
- (struct __CTFont { } *)_createFontWithName:(id)a0 size:(double)a1 weight:(double)a2;
- (id)availableMembersOfFontFamily:(id)a0;
- (struct __CTFont { } *)createFontWithName:(id)a0 size:(double)a1 weight:(double)a2 attributes:(id)a3;
- (id)displayNameForFontFamily:(id)a0;
- (void)p_FontWasDownloaded:(id)a0;
- (id)p_excludedFamilyNames;
- (id)sortedFontFamilies;
- (id)sortedFontFamilyEntriesForStylesheet:(id)a0;

@end
