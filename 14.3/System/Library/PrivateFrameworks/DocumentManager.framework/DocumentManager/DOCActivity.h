@class NSArray, NSString;
@protocol DOCItemActivityPerformer;

@interface DOCActivity : UIActivity

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *localizedTitle;
@property (readonly) id<DOCItemActivityPerformer> actionPerformerProxy;

+ (long long)activityCategory;
+ (id)activityWithIdentifier:(id)a0 actionPerformerProxy:(id)a1;
+ (long long)_activityStyleForActivityIdentifier:(id)a0;
+ (BOOL)isDestructiveActionIdentifier:(id)a0;
+ (id)_imageNameForActivityIdentifier:(id)a0;
+ (id)_titleForActivityIdentifier:(id)a0;

- (id)activityType;
- (void).cxx_destruct;
- (BOOL)_needsResolvedActivityItems;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (id)initWithProxy:(id)a0 identifier:(id)a1;

@end
