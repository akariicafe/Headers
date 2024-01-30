@class NSString;
@protocol PXActivityItemSourceController;

@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)a0;

- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (void)_prepareWithMomentShareLink:(id)a0;

@end
