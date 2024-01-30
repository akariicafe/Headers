@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *dominantScript;
@property (readonly, copy) NSDictionary *languageMap;

+ (void)initialize;
+ (id)_scriptNameForScriptIndex:(unsigned long long)a0;
+ (id)orthographyWithDominantScript:(id)a0 languageMap:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultOrthographyForLanguage:(id)a0;
+ (id)_orthographyWithDominantScript:(id)a0 languageMap:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)allScripts;
- (id)allLanguages;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)description;
- (id)dominantLanguageForScript:(id)a0;
- (unsigned int)orthographyFlags;
- (id)dominantLanguage;
- (BOOL)isEqual:(id)a0;
- (id)languagesForScript:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
