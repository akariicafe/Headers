@class MAAsset, NSString;

@interface DUDefinitionDictionary : NSObject {
    struct __DCSDictionary { } *_dictionary;
    MAAsset *_assetToUpgrade;
}

@property BOOL isAppleDictionary;
@property BOOL isTTYDictionary;
@property long long preferredOrder;
@property (readonly) struct __DCSDictionary { } *dictionaryRef;
@property (readonly) MAAsset *rawAsset;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) NSString *localizedSortName;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *definitionLanguage;
@property (nonatomic) BOOL activated;
@property float progress;
@property (readonly) BOOL needsDownloadNewerVersion;

+ (id)displayNameForLanguageIdentifier:(id)a0;

- (id)initWithAsset:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)_definitionValueForTerm:(id)a0;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (void)setAssetToUpgrade:(id)a0;

@end
