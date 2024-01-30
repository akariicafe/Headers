@class PUReviewAsset, PUObserverRegistry, NSString, NSURL, PUMediaProvider, MarkupViewController;

@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate>

@property (readonly, nonatomic) MarkupViewController *_markupViewController;
@property (readonly, nonatomic) PUObserverRegistry *_observerRegistry;
@property (nonatomic, setter=_setSourceImageVersion:) long long _sourceImageVersion;
@property (copy, nonatomic, setter=_setWorkaroundInputWriteURL:) NSURL *_workaroundInputWriteURL;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (void)_notifyObserversDidFinishWithSavedAsset:(id)a0;
- (id)initWithReviewAsset:(id)a0 mediaProvider:(id)a1;
- (void)_handleDoneButton:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)_handleCancelButton:(id)a0;
- (void)viewDidLoad;

@end
