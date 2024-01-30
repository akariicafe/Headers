@class UIFont, NSString, NSMutableDictionary, NSArray;

@interface TSWPFont : NSObject

@property (retain, nonatomic) NSString *postScriptName;
@property (retain, nonatomic) NSString *familyName;
@property (retain, nonatomic) UIFont *platformFont;
@property (nonatomic) unsigned long long hashValue;
@property (nonatomic) BOOL isFallbackFont;
@property (retain) NSMutableDictionary *alternatePlatformFonts;
@property (retain, nonatomic) NSArray *creationBacktrace;
@property (readonly, nonatomic) NSString *desiredPostScriptName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) const struct __CTFont { } *ctFont;
@property (readonly, nonatomic) BOOL bold;
@property (readonly, nonatomic) BOOL italic;
@property (readonly, nonatomic) BOOL isMasqueradingFont;
@property (readonly, nonatomic) BOOL isRequestedFont;
@property (readonly, nonatomic) NSArray *familyFaces;
@property (readonly, nonatomic) TSWPFont *baseFont;

+ (id)systemFont;
+ (BOOL)isKeyValueProxyLeafType;
+ (id)missingFontPostScriptName;
+ (id)fontWithDesiredPostScriptName:(id)a0;
+ (id)baseFontForFamilyName:(id)a0;
+ (id)postScriptNameForFamilyName:(id)a0;
+ (id)loadPlatformFontForPostScriptName:(id)a0 size:(double)a1;
+ (unsigned long long)optionsForLoadingPlatformFontWithPostScriptName:(id)a0;
+ (id)loadPlatformFontOrFallbackForPostScriptName:(id)a0 size:(double)a1 foundFallback:(BOOL *)a2;
+ (id)localizedFamilyNameForPlatformFont:(id)a0;
+ (id)facesOfFontFamily:(id)a0;
+ (id)missingFont;
+ (id)helveticaFont;
+ (id)fontWithOpaqueIdentifier:(id)a0;
+ (id)fontWithDesiredPostScriptName:(id)a0 fallbackFont:(id)a1 isFallback:(BOOL)a2;
+ (id)fontWithDesiredPostScriptName:(id)a0 atSize:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithSize:(double)a0;
- (id)copyWithSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2 traits:(id)a3;
- (id)initWithDesiredPostScriptName:(id)a0 andPlatformFont:(id)a1 isFallback:(BOOL)a2;
- (id)initWithDesiredPostScriptName:(id)a0 size:(double)a1;
- (const struct __CTFont { } *)ctFontForSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2;
- (const struct __CTFont { } *)ctFontForSize:(double)a0;
- (struct __CTFont { } *)ctFontForSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2 traits:(id)a3;
- (id)initWithDesiredPostScriptName:(id)a0;
- (id)copyWithSize:(double)a0 bold:(BOOL)a1 italic:(BOOL)a2;

@end
