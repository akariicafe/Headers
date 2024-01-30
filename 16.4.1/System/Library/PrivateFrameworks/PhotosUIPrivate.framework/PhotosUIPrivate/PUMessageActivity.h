@class NSString;
@protocol PXActivityItemSourceController;

@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)a0;

- (void).cxx_destruct;
- (id)activityViewController;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)_prepareWithMomentShareLink:(id)a0;

@end
