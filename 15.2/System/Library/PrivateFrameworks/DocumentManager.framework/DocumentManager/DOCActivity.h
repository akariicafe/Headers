@class NSArray, NSString, UIImage;
@protocol DOCItemActivityPerformer;

@interface DOCActivity : UIActivity

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *localizedTitle;
@property (readonly) id<DOCItemActivityPerformer> actionPerformerProxy;

+ (long long)activityCategory;
+ (id)activityWithIdentifier:(id)a0 actionPerformerProxy:(id)a1;
+ (id)_activityWithIdentifier:(id)a0 forBrowserAction:(id)a1 actionPerformerProxy:(id)a2;
+ (long long)_activityStyleForActivityIdentifier:(id)a0;
+ (BOOL)isDestructiveActionIdentifier:(id)a0;
+ (id)_imageNameForActivityIdentifier:(id)a0;
+ (id)_titleForActivityIdentifier:(id)a0;
+ (id)activityForBrowserAction:(id)a0 actionPerformerProxy:(id)a1;

- (id)activityType;
- (void)validate;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (BOOL)_needsResolvedActivityItems;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithIdentifier:(id)a0 actionPerformer:(id)a1 forBrowserAction:(id)a2;

@end
