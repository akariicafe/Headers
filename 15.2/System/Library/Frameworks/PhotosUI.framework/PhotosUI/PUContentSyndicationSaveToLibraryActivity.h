@class NSString;
@protocol PXActivityItemSourceController;

@interface PUContentSyndicationSaveToLibraryActivity : UIActivity <PXActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
