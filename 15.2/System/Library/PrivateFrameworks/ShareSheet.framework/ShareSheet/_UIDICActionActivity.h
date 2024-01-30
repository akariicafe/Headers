@class NSString;

@interface _UIDICActionActivity : UIActivity {
    NSString *_actionActivityType;
    NSString *_activityImageName;
    NSString *_localizedTitle;
}

@property (copy, nonatomic) id /* block */ activityPerformingHandler;
@property (copy, nonatomic) id /* block */ activityFinishedPerformingHandler;

+ (id)newPreviewActionActivity;
+ (id)newLegacyDelegationActionActivityForPrint;
+ (id)newLegacyDelegationActionActivityForCopy;
+ (id)newLegacyDelegationActionActivityForSaveToCameraRoll;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cleanup;
- (id)initWithActivityType:(id)a0 activityImageName:(id)a1 localizedTitle:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
