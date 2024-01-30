@class TabDocument;

@interface AddToNewsUIActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) TabDocument *tabDocument;

+ (long long)activityCategory;
+ (id)activityWithTabDocument:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithApplicationExtension:(id)a0 tabDocument:(id)a1;

@end
