@class NSString;
@protocol PXActivityItemSourceController;

@interface PUCopyLinkActivity : PXActivity <PXMomentShareActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsMomentShareLinkForAssetCount:(long long)a0;
+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
