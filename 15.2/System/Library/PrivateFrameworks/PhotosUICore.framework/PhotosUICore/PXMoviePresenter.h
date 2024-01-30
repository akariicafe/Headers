@class UIViewController;

@interface PXMoviePresenter : NSObject

@property (readonly, weak, nonatomic) UIViewController *presentingViewController;

+ (id)moviePresenterWithPresentingViewController:(id)a0;

- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)presentMovieViewControllerForAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2 preferredTransitionType:(long long)a3;
- (BOOL)presentMovieViewControllerForAssetCollection:(id)a0 keyAsset:(id)a1 preferredTransitionType:(long long)a2;

@end
