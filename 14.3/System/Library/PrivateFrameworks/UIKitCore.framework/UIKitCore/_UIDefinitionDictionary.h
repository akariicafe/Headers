@class MAAsset, NSString;

@interface _UIDefinitionDictionary : NSObject {
    struct __DCSDictionary { } *_dictionary;
}

@property (readonly) MAAsset *rawAsset;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *definitionLanguage;
@property BOOL activated;
@property (retain) MAAsset *assetToUpgrade;

+ (id)_normalizedLanguageStringForLanguageCode:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateAsset;
- (BOOL)assetIsLocal;
- (id)description;
- (BOOL)assetIsDeletable;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (id)_definitionValueForTerm:(id)a0;
- (id)_HTMLDefinitionForTerm:(id)a0 type:(long long)a1;
- (id)_shortHTMLDefinitionForTerm:(id)a0;
- (id)_attributedDefinitionForTerm:(id)a0;
- (id)_fullHTMLDefinitionForTerm:(id)a0;
- (id)initWithAsset:(id)a0;
- (BOOL)_isTTYDictionary;

@end
