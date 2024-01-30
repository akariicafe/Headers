@class NSString;

@interface ICShowIdentifierActivity : UIActivity

@property (retain, nonatomic) NSString *identifier;

+ (long long)activityCategory;

- (id)activityTitle;
- (id)activityType;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
