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
- (BOOL)endpointerIsAvailableWithContext:(id)a0;
- (id)endpointerModelURL:(id)a0;
- (id)getPreferredAsset:(id)a0 orAsset:(id)a1 withLocale:(id)a2;
- (id)initWithAvailableAssets:(id)a0 context:(id)a1;
- (BOOL)isPremium:(id)a0;
- (id)selectAsset:(id)a0 withLocale:(id)a1;

@end
