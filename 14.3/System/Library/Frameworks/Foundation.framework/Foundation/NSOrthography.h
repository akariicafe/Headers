@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)_orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)defaultOrthographyForLanguage:(id)a0;
+ (id)_scriptNameForScriptIndex:(unsigned long long)a0;

- (id)dominantLanguage;
- (id)allLanguages;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)orthographyFlags;
- (id)languagesForScript:(id)a0;
- (id)dominantLanguageForScript:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)allScripts;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
