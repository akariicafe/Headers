@class TabDocument;

@interface AddToNewsUIActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) TabDocument *tabDocument;

+ (long long)activityCategory;
+ (id)activityWithTabDocument:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)init;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithApplicationExtension:(id)a0 tabDocument:(id)a1;

@end
