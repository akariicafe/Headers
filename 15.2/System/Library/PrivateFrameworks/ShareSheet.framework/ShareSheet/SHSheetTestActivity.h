@class NSArray;

@interface SHSheetTestActivity : UIActivity

@property (copy, nonatomic) NSArray *activityItems;

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
