@interface NSSimpleOrthography : NSOrthography {
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (id)orthographyWithFlags:(unsigned int)a0;
+ (BOOL)supportsSecureCoding;

- (id)dominantLanguage;
- (id)allLanguages;
- (unsigned int)orthographyFlags;
- (id)languagesForScript:(id)a0;
- (id)dominantLanguageForScript:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dominantScript;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)initWithFlags:(unsigned int)a0;
- (id)allScripts;
- (Class)classForCoder;
- (id)languageMap;
- (void)encodeWithCoder:(id)a0;

@end
