@interface NSSimpleOrthography : NSOrthography {
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)orthographyWithFlags:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)allScripts;
- (id)languageMap;
- (id)allLanguages;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)dominantLanguageForScript:(id)a0;
- (id)dominantScript;
- (unsigned int)orthographyFlags;
- (id)dominantLanguage;
- (id)languagesForScript:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithFlags:(unsigned int)a0;

@end
