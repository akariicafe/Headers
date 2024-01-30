@class NSString, MAAsset, _LTTranslationContext;

@interface _LTHybridEndpointerAssetInfo : NSObject {
    MAAsset *_spgAsset;
    MAAsset *_sourceLanguageAsset;
    MAAsset *_targetLanguageAsset;
    _LTTranslationContext *_context;
}

@property (readonly, nonatomic) NSString *hybridepAssetFile;
@property (readonly, nonatomic) NSString *spgAssetFile;

- (void).cxx_destruct;
- (id)caesuraModelURL;
- (id)endpointerModelURL:(id)a0;
- (BOOL)endpointerIsAvailableWithContext:(id)a0;
- (id)selectAsset:(id)a0 withLocale:(id)a1;
- (id)getPreferredAsset:(id)a0 orAsset:(id)a1 withLocale:(id)a2;
- (BOOL)isPremium:(id)a0;
- (id)initWithAvailableAssets:(id)a0 context:(id)a1;

@end
