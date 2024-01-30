@class NSString, NSDictionary, NSArray;

@interface CDMDynamicConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *cachePath;
@property (readonly, nonatomic) NSString *graphName;
@property (readonly, nonatomic) NSString *siriVocabularySandboxId;
@property (readonly, nonatomic) NSDictionary *assetPaths;
@property (readonly, nonatomic) NSArray *overrideSiriVocabSpans;

- (id)initWithLanguageCode:(id)a0;
- (void)setLanguageCode:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setCachePath:(id)a0;
- (id)getAssetPathForService:(Class)a0;
- (id)initWithLanguageCode:(id)a0 cachePath:(id)a1 graphName:(id)a2 sandboxId:(id)a3 assetPaths:(id)a4;
- (id)initWithLanguageCode:(id)a0 cachePath:(id)a1 graphName:(id)a2 sandboxId:(id)a3 assetPaths:(id)a4 overrideSiriVocabSpans:(id)a5;
- (id)getAssetForService:(Class)a0;
- (BOOL)isEqualWithoutSandboxId:(id)a0;
- (id)initWithLanguageCode:(id)a0 cachePath:(id)a1 graphName:(id)a2 assetPaths:(id)a3 overrideSiriVocabSpans:(id)a4;
- (void)setGraphName:(id)a0;
- (void)setSiriVocabularySandboxId:(id)a0;
- (void)setAssetPaths:(id)a0;
- (void)setOverrideSiriVocabSpans:(id)a0;

@end
