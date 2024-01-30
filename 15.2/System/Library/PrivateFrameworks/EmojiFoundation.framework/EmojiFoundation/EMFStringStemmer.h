@class NSLock, NSLocale;

@interface EMFStringStemmer : NSObject {
    struct sb_stemmer { } *_stemmer;
    NSLock *_stemmerLock;
}

@property (readonly, retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned long long encoding;

+ (id)stemmerLanguageNameForLocale:(id)a0;
+ (struct sb_stemmer { } *)_createSnowballStemmerForLocale:(id)a0;
+ (unsigned char)supportsLocale:(id)a0;
+ (id)supportedLanguageNames;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stemToken:(id)a0;
- (id)stemTokens:(id)a0;

@end
