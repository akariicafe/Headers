@class NSString;
@protocol PXActivityItemSourceController;

@interface PUCopyLinkActivity : PXActivity <PXMomentShareActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;
+ (BOOL)wantsMomentShareLinkForAssetCount:(long long)a0;

- (id)activityType;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
