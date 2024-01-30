@class NSString;

@interface PUEditActionActivity : UIActivity

@property (retain, nonatomic) NSString *internalActivityType;
@property (copy, nonatomic) id /* block */ activityBlock;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) id /* block */ performActivityActionHandler;
@property (copy, nonatomic) id /* block */ canPerformActivityActionHandler;

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (id)initWithActionName:(id)a0 activityType:(id)a1 systemImageName:(id)a2;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
