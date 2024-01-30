@class NSString;

@interface _UIDICActionActivity : UIActivity {
    NSString *_actionActivityType;
    NSString *_activityImageName;
    NSString *_localizedTitle;
}

@property (copy, nonatomic) id /* block */ activityPerformingHandler;
@property (copy, nonatomic) id /* block */ activityFinishedPerformingHandler;

+ (long long)activityCategory;
+ (id)newPreviewActionActivity;
+ (id)newLegacyDelegationActionActivityForPrint;
+ (id)newLegacyDelegationActionActivityForCopy;
+ (id)newLegacyDelegationActionActivityForSaveToCameraRoll;

- (id)activityType;
- (void).cxx_destruct;
- (void)_cleanup;
- (id)description;
- (id)activityTitle;
- (id)initWithActivityType:(id)a0 activityImageName:(id)a1 localizedTitle:(id)a2;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
