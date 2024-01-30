@class NSString;

@interface ICShowIdentifierActivity : UIActivity

@property (retain, nonatomic) NSString *identifier;

+ (long long)activityCategory;

- (id)activityType;
- (id)initWithIdentifier:(id)a0;
- (id)activityViewController;
- (void).cxx_destruct;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
