@class PXMiroMovieProvider, NSString;

@interface PXMiroMoviePresenter : PXMoviePresenter <PXMovieProviderDelegate>

@property (retain, nonatomic) PXMiroMovieProvider *miroProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)presentMovieViewControllerForAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2 preferredTransitionType:(long long)a3;
- (id)presentingViewControllerForMovieProvider:(id)a0;
- (long long)_presentationTypeWithPreferredTransitionType:(long long)a0;
- (void)_enableViewControllerChromeForViewController:(id)a0;

@end
