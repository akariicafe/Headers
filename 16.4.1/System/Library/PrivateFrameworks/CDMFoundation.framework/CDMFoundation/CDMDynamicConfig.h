@class NSString, NSDictionary, NSArray, CDMEmbeddingConfigs;

@interface CDMDynamicConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *graphName;
@property (readonly, nonatomic) NSString *siriVocabularySandboxId;
@property (readonly, nonatomic) NSDictionary *assetPaths;
@property (readonly, nonatomic) NSString *assetDirPath;
@property (readonly, nonatomic) NSArray *overrideSiriVocabSpans;
@property (readonly, nonatomic) NSArray *overrideMentions;
@property (readonly, nonatomic) NSArray *overrideContextualSpans;
@property (readonly, nonatomic) CDMEmbeddingConfigs *embeddingConfigs;

+ (id)resolveActiveGraph:(id)a0;

- (id)getAssetForFactorName:(id)a0;
- (id)initWithLanguageCode:(id)a0;
- (void)setLanguageCode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)getAssetBundlePathForFactorName:(id)a0;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetDirPath:(id)a3;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4 overrideMentions:(id)a5 overrideContextualSpans:(id)a6;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetPaths:(id)a3;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetPaths:(id)a3 assetDirPath:(id)a4 overrideSiriVocabSpans:(id)a5 overrideMentions:(id)a6 overrideContextualSpans:(id)a7;
- (id)initWithLanguageCode:(id)a0 graphName:(id)a1 sandboxId:(id)a2 assetPaths:(id)a3 overrideSiriVocabSpans:(id)a4 overrideMentions:(id)a5 overrideContextualSpans:(id)a6;
- (BOOL)isEqualWithoutSandboxId:(id)a0;
- (void)setAssetDirPath:(id)a0;
- (void)setAssetPaths:(id)a0;
- (void)setEmbeddingConfigs:(id)a0;
- (void)setGraphName:(id)a0;
- (void)setOverrideContextualSpans:(id)a0;
- (void)setOverrideMentions:(id)a0;
- (void)setOverrideSiriVocabSpans:(id)a0;
- (void)setSiriVocabularySandboxId:(id)a0;

@end
