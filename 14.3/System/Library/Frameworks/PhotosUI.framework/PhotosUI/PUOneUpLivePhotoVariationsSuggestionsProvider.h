@class NSString, NSMutableDictionary;

@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver>

@property (readonly, nonatomic) NSMutableDictionary *infos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleCancellationForAsset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleRenderStatusChangeForAsset:(id)a0 info:(id)a1;
- (BOOL)canProvideSuggestionForAsset:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleRenderProgressChangeForInfo:(id)a0;
- (void)_handleRenderCompletionForAsset:(id)a0 withSuccess:(BOOL)a1 result:(id)a2 error:(id)a3;
- (long long)_recommendedVariationTypeForAsset:(id)a0;
- (id)requestSuggestionForAsset:(id)a0 withResultHandler:(id /* block */)a1;

@end
