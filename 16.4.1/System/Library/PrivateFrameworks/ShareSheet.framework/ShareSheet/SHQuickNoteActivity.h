@class NSArray, NSString, NSObject, UIViewController;
@protocol OS_dispatch_queue, ICSystemPaperExtensionHostViewController;

@interface SHQuickNoteActivity : UIActivity <ICSystemPaperPresentationDelegate> {
    NSObject<OS_dispatch_queue> *_queryQueue;
    _Atomic BOOL _isQuickNoteExtensionInstalled;
    _Atomic BOOL _canOpenFromManagedToUnmanaged;
}

@property (copy, nonatomic) NSArray *_urls;
@property (copy, nonatomic) NSArray *_images;
@property (copy, nonatomic) NSArray *_imageFileURLs;
@property (nonatomic) BOOL _hasSupportedShareableItems;
@property (nonatomic) BOOL _hasUserActivityCurrent;
@property (readonly) BOOL isQuickNoteExtensionInstalled;
@property (retain, nonatomic) UIViewController<ICSystemPaperExtensionHostViewController> *systemPaperViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityTitle;
- (id)activityType;
- (id)init;
- (void).cxx_destruct;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)_configureQuickNotePresentationDelegateWithPresenterViewController:(id)a0;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canOpenFromManagedToUnmanaged;
- (void)systemPaperDidFinishWithError:(id)a0;

@end
