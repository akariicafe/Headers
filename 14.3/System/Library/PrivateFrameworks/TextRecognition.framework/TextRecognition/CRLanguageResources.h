@class CVNLPLanguageResourceBundle, NSLocale;

@interface CRLanguageResources : NSObject

@property (retain) CVNLPLanguageResourceBundle *_cvnlpLanguageResourceBundle;
@property (readonly, nonatomic) NSLocale *locale;
@property (nonatomic) void *lmCharacterLanguageModel;
@property (nonatomic) struct CVNLPLanguageModel { } *cvnlpCharacterLanguageModel;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;
@property (nonatomic) void *wordLanguageModel;

+ (BOOL)isLanguageSupported:(id)a0;
+ (void *)createCharacterModel:(id)a0;
+ (struct _LXLexicon { } *)createStaticLexicon:(id)a0;
+ (void *)createWordLanguageModel:(id)a0;
+ (struct CVNLPLanguageModel { } *)createCVNLPCharacterLanguageModel:(id)a0;
+ (BOOL)isCustomWordsSupportedForLanguageIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLanguageIdentifier:(id)a0;
- (id)cvnlpLanguageResourceBundle:(id)a0;

@end
