@class PXMiroMovieProvider, UIViewController, NSString;

@interface PXMiroMoviePresenter : NSObject <PXMovieProviderDelegate>

@property (retain, nonatomic) PXMiroMovieProvider *miroProvider;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentingViewControllerForMovieProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)a0;
- (BOOL)presentMiroMovieViewController:(id)a0 withPreferredTransitionType:(long long)a1;
- (BOOL)presentMiroMovieControllerForAssetCollection:(id)a0 keyAsset:(id)a1 preferredTransitionType:(long long)a2;
- (long long)_presentationTypeWithPreferredTransitionType:(long long)a0;
- (void)_enableViewControllerChromeForViewController:(id)a0;

@end
