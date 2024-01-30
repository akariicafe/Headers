@class NSArray;

@interface SHSheetTestActivity : UIActivity

@property (copy, nonatomic) NSArray *activityItems;

+ (long long)activityCategory;

- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;

@end
